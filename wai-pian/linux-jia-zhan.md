---
description: 本文章使用ubuntu 18.04
---

# Linux 架站

## 使用套件

### 一、Mono

{% embed url="https://www.mono-project.com/download/stable/\#download-lin" %}

### 二、其他套件

```bash
-------------------必須要執行-------------------
#更改密碼
sudo -s
passwd

#更新/升級
sudo apt update && sudo apt upgrade

#tasksel 套件
sudo apt-get install -y tasksel 

#xrdp 遠端桌面
sudo apt-get install -y xrdp 
sudo service xrdp restart

#SQL Server - Ubuntu 18.04
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | sudo apt-key add -
sudo add-apt-repository "$(wget -qO- https://packages.microsoft.com/config/ubuntu/18.04/mssql-server-2019.list)"
sudo apt-get update
sudo apt-get install -y mssql-server
sudo /opt/mssql/bin/mssql-conf setup
systemctl status mssql-server --no-pager

#SQL Server 命令列工具
curl https://packages.microsoft.com/keys/microsoft.asc | sudo apt-key add -
curl https://packages.microsoft.com/config/ubuntu/18.04/prod.list | sudo tee /etc/apt/sources.list.d/msprod.list
sudo apt-get update 
sudo apt-get install mssql-tools unixodbc-dev
sudo apt-get update 
sudo apt-get install mssql-tools

#Mono 
sudo apt install gnupg ca-certificates
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF
echo "deb https://download.mono-project.com/repo/ubuntu stable-bionic main" | sudo tee /etc/apt/sources.list.d/mono-official-stable.list
sudo apt update

sudo apt install mono-devel


#apache2 
sudo apt-get install apach2
apache2 -version

#配置防火牆設置
$ sudo ufw app list
$ sudo ufw allow 'Apache'
-------------額外安裝-----------------
#GUI 桌面
sudo apt-get install -y xfce4

#MYSQL
wget https://files.phpmyadmin.net/phpMyAdmin/5.1.0/phpMyAdmin-5.1.0-all-languages.zip

#ZIP
sudo apt install zip

systemctl status apache2.service

```

## 使用步驟

### 一、放進自己的網頁

將自己的網站放進以下路徑，不論是MVC 5 或是 Core 都可以使用

```text
cd /var/www/
```

如果遇到權限問題請參考下方

```bash
sudo chmod -R 755 /var/www/example
```

### 二、設定conf

首次設定依據需求來做設定，請讀者自行到下方路徑。

```text
cd /etc/apache2/
```

1.apache2.conf

可以將自己的網站去做關閉 Index of 的畫面

```bash
<Directory /var/www/iis_example/>
        Options Indexes FollowSymLinks
        AllowOverride None
        Require all granted
</Directory>

```

![](../.gitbook/assets/image%20%2850%29.png)

2.ports.conf

開啟port直接到

```bash
# If you just change the port or add more ports here, you will likely also
# have to change the VirtualHost statement in
# /etc/apache2/sites-enabled/000-default.conf
Listen 80
Listen 10050
Listen 10051
<IfModule ssl_module>
        Listen 443
</IfModule>
<IfModule mod_gnutls.c>
        Listen 443
</IfModule>
# vim: syntax=apache ts=4 sw=4 sts=4 sr noet
```

### 三、設定網站的基本設定

設定依據需求來做設定，請讀者自行到下方路徑。

```text
cd /etc/apache2/sites-enabled
```

以下使用MVC 5 的使用者做為參考，請開啟自行的conf 作為你架站的媒介

```text
touch Demo.conf
```

若是另一種介面可以使用vim 來操作

```text
<VirtualHost *:81>
        ServerAdmin     webmaster@localhost
        ServerName      Demo
        ErrorLog        ${APACHE_LOG_DIR}/error.log
        CustomLog       ${APACHE_LOG_DIR}/access.log combined
        DocumentRoot    /var/www/Demo
        MonoServerPath  Demo  "/usr/bin/mod-mono-server4"
        MonoAutoApplication disabled
        #AddHandler mono .aspx .asmx
        MonoApplications Demo "/:/var/www/iis_example/MES_Cloud_Work"
        MonoSetEnv      MONO_IOMAP=all
    <Directory /var/www/Demo>
        Require all granted
        MonoSetServerAlias MES_Cloud_Work
        SetHandler mono
    </Directory>
</VirtualHost>
```

