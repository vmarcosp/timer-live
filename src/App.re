open Hooks;

[@react.component]
let make = () => {
  let {start, minutes, seconds} = Hooks.useTimer("05:00");

  Js.log((minutes, seconds));

  React.useEffect0(() => {
    start();
    None;
  });

  App_Styles.(
    <div className=container>
      <div className=titleContainer>
        <span className=title> "LIVE"->React.string </span>
        <span className=divider />
      </div>
      <div className=content>
        <h2 className=talkTitle> {j|O que é ReasonML? |j}->React.string </h2>
        <h1 className=timer>{j| $(minutes):$(seconds) |j}->React.string</h1>
      </div>
      <Logo />
    </div>
  );
};
