let () = {
  Alcotest.run(
    "Tablecloth",
    [
      (
        "tests",
        [
          BoolTest.suite,
          CharTest.suite,
          FloatTest.suite,
          IntTest.suite,
          OptionTest.suite,
          ResultTest.suite,
          FunTest.suite,
          StringTest.suite,
          Tuple2Test.suite,
          Tuple3Test.suite,
          ...TableclothTest.suite,
        ],
      ),
    ],
  );
};