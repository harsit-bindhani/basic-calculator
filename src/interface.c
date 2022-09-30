/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *button1;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label2;
  GtkWidget *button2;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *clear;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label3;
  GtkWidget *plusminus;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label9;
  GtkWidget *seven;
  GtkWidget *eight;
  GtkWidget *nine;
  GtkWidget *div;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label8;
  GtkWidget *four;
  GtkWidget *five;
  GtkWidget *six;
  GtkWidget *mul;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label6;
  GtkWidget *one;
  GtkWidget *two;
  GtkWidget *three;
  GtkWidget *minus;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label5;
  GtkWidget *zero;
  GtkWidget *dot;
  GtkWidget *equal_;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label7;
  GtkWidget *plus;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label4;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));
  gtk_window_set_default_size (GTK_WINDOW (window1), 40, 65);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 104, 56);
  gtk_widget_set_size_request (entry1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 24, 104);
  gtk_widget_set_size_request (button1, 69, 29);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button1), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("bskp"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox2), label2, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 104, 104);
  gtk_widget_set_size_request (button2, 68, 29);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button2), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-clear", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("C.E"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  clear = gtk_button_new ();
  gtk_widget_show (clear);
  gtk_fixed_put (GTK_FIXED (fixed1), clear, 184, 104);
  gtk_widget_set_size_request (clear, 68, 29);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (clear), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label3 = gtk_label_new_with_mnemonic (_("clr"));
  gtk_widget_show (label3);
  gtk_box_pack_start (GTK_BOX (hbox3), label3, FALSE, FALSE, 0);

  plusminus = gtk_button_new ();
  gtk_widget_show (plusminus);
  gtk_fixed_put (GTK_FIXED (fixed1), plusminus, 264, 104);
  gtk_widget_set_size_request (plusminus, 68, 29);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (plusminus), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-goto-bottom", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label9 = gtk_label_new_with_mnemonic (_("\302\261"));
  gtk_widget_show (label9);
  gtk_box_pack_start (GTK_BOX (hbox9), label9, FALSE, FALSE, 0);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 24, 144);
  gtk_widget_set_size_request (seven, 69, 29);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 104, 144);
  gtk_widget_set_size_request (eight, 69, 29);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 184, 144);
  gtk_widget_set_size_request (nine, 69, 29);

  div = gtk_button_new ();
  gtk_widget_show (div);
  gtk_fixed_put (GTK_FIXED (fixed1), div, 264, 144);
  gtk_widget_set_size_request (div, 68, 29);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (div), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-orientation-portrait", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("/"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox8), label8, FALSE, FALSE, 0);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 24, 184);
  gtk_widget_set_size_request (four, 69, 29);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 104, 184);
  gtk_widget_set_size_request (five, 69, 29);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 184, 184);
  gtk_widget_set_size_request (six, 69, 29);

  mul = gtk_button_new ();
  gtk_widget_show (mul);
  gtk_fixed_put (GTK_FIXED (fixed1), mul, 264, 184);
  gtk_widget_set_size_request (mul, 69, 29);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (mul), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-close", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label6 = gtk_label_new_with_mnemonic (_("*"));
  gtk_widget_show (label6);
  gtk_box_pack_start (GTK_BOX (hbox6), label6, FALSE, FALSE, 0);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 24, 224);
  gtk_widget_set_size_request (one, 69, 29);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 104, 224);
  gtk_widget_set_size_request (two, 69, 29);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 184, 224);
  gtk_widget_set_size_request (three, 69, 29);

  minus = gtk_button_new ();
  gtk_widget_show (minus);
  gtk_fixed_put (GTK_FIXED (fixed1), minus, 264, 224);
  gtk_widget_set_size_request (minus, 69, 29);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (minus), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-remove", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("-"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox5), label5, FALSE, FALSE, 0);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 24, 264);
  gtk_widget_set_size_request (zero, 69, 29);

  dot = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (dot);
  gtk_fixed_put (GTK_FIXED (fixed1), dot, 104, 264);
  gtk_widget_set_size_request (dot, 69, 29);

  equal_ = gtk_button_new ();
  gtk_widget_show (equal_);
  gtk_fixed_put (GTK_FIXED (fixed1), equal_, 184, 264);
  gtk_widget_set_size_request (equal_, 69, 29);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (equal_), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-execute", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("="));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox7), label7, FALSE, FALSE, 0);

  plus = gtk_button_new ();
  gtk_widget_show (plus);
  gtk_fixed_put (GTK_FIXED (fixed1), plus, 264, 264);
  gtk_widget_set_size_request (plus, 69, 29);

  alignment4 = gtk_alignment_new (0.5, 0.53, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (plus), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("+"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox4), label4, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) clear, "clicked",
                    G_CALLBACK (on_clear_clicked),
                    NULL);
  g_signal_connect ((gpointer) plusminus, "clicked",
                    G_CALLBACK (on_plusminus_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) div, "clicked",
                    G_CALLBACK (on_div_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) mul, "clicked",
                    G_CALLBACK (on_mul_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) minus, "clicked",
                    G_CALLBACK (on_minus_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) dot, "clicked",
                    G_CALLBACK (on_dot_clicked),
                    NULL);
  g_signal_connect ((gpointer) equal_, "clicked",
                    G_CALLBACK (on_equal__clicked),
                    NULL);
  g_signal_connect ((gpointer) plus, "clicked",
                    G_CALLBACK (on_plus_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, clear, "clear");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, plusminus, "plusminus");
  GLADE_HOOKUP_OBJECT (window1, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (window1, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (window1, image9, "image9");
  GLADE_HOOKUP_OBJECT (window1, label9, "label9");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, div, "div");
  GLADE_HOOKUP_OBJECT (window1, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (window1, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (window1, image8, "image8");
  GLADE_HOOKUP_OBJECT (window1, label8, "label8");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, five, "five");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, mul, "mul");
  GLADE_HOOKUP_OBJECT (window1, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window1, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window1, image6, "image6");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, minus, "minus");
  GLADE_HOOKUP_OBJECT (window1, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window1, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window1, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, dot, "dot");
  GLADE_HOOKUP_OBJECT (window1, equal_, "equal_");
  GLADE_HOOKUP_OBJECT (window1, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window1, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window1, image7, "image7");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, plus, "plus");
  GLADE_HOOKUP_OBJECT (window1, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window1, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window1, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");

  return window1;
}

