using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Speech.Synthesis;

namespace Forms_Finefont
{
    public partial class Form1 : Form
    {
        SpeechSynthesizer speech;
        public Form1()
        {
            InitializeComponent();
            speech = new SpeechSynthesizer();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            foreach (var voice in speech.GetInstalledVoices())
                comboBox1.Items.Add(voice.VoiceInfo.Name);
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            if (comboBox1.Text == "")
                MessageBox.Show("error");

               else if (richTextBox1.Text != "")
                {
                    speech.SelectVoice(comboBox1.Text);
                    speech.SpeakAsync(richTextBox1.Text);
                }



        }

        private void Button2_Click(object sender, EventArgs e)
        {
            if (speech.State == SynthesizerState.Speaking)
                speech.Pause();
        }

        private void Button3_Click(object sender, EventArgs e)
        {
            if (speech.State == SynthesizerState.Paused)
                speech.Resume();
        }

        private void ComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
