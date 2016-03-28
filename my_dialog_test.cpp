#include "my_dialog_test.h"
#include "my_dialog.h"


void my_dialog_test::close_with_alt_c()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  //Need 100 milliseconds!
  QTest::keyClick(&d,Qt::Key_C,Qt::AltModifier, 100);
  QVERIFY(!d.isVisible());

}

void my_dialog_test::default_construction()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  d.close();
  QVERIFY(!d.isVisible());
}
