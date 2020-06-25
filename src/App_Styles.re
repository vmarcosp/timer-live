open Css;

let container =
  style([
    padding(42->px),
    height(100.->pct),
    width(100.->pct),
    margin2(~v=zero, ~h=`auto),
    boxSizing(`borderBox),
    maxWidth(1200->px),
    display(`flex),
    flexDirection(column),
    alignItems(`center),
  ]);

let content =
  style([
    display(`flex),
    alignItems(`center),
    flexDirection(column),
    flex(`num(3.)),
    paddingTop(120->px)
  ]);

let titleContainer =
  style([
    //
    display(`flex),
    flexDirection(`column),
    alignItems(`center),
    maxWidth(80->px),
  ]);

let title =
  style([
    fontFamily("'Poppins'"),
    fontSize(36->px),
    fontWeight(`num(600)),
    color(black),
  ]);

let divider =
  style([
    height(4->px),
    width(100.->pct),
    background("FF3366"->hex),
    display(`block),
  ]);

let talkTitle =
  style([
    fontFamily("'Poppins'"),
    fontSize(56->px),
    fontWeight(`bold),
    color(black),
    margin(zero),
    marginBottom(42->px)
  ]);

let timer = style([
  fontFamily("Poppins"),
  fontSize(120->px),
  margin(zero),
  color("FF3366"->hex)
])
