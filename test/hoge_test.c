#include "hoge.h"
#include <stdlib.h> // for exit code
#include <check.h>

START_TEST(test_hoge)
{
  ck_assert_int_eq(hoge(2), 4);
  ck_assert_int_eq(hoge(2), 3);
}
END_TEST

Suite *hoge_suite(void)
{
  Suite *s;
  TCase *tc;

  s = suite_create("hoge");
  tc = tcase_create("hoge");

  tcase_add_test(tc, test_hoge);
  suite_add_tcase(s, tc);

  return s;
}

int main(void)
{
  int failed;
  Suite *suite;
  SRunner *runner;

  suite = hoge_suite();
  runner = srunner_create(suite);

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);

  return (failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}