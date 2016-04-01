#include "my_dialog_test.h"
#include "my_dialog.h"

void my_dialog_test::default_construction()
{
  my_dialog d;
  d.show();
  QVERIFY(d.isVisible());
  d.close();
  QVERIFY(d.isHidden());
}

void my_dialog_test::close_with_x()
{
  my_dialog d;
  d.show();
  QTest::keyClick(&d,Qt::Key_X,Qt::NoModifier, 100);
  QVERIFY(d.isHidden());
}

