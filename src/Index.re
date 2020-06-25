

Css.(global("html, body, #root", [
  padding(zero),
  margin(zero),
  height(100.->vh),
  boxSizing(`borderBox)
]));

ReactDOMRe.renderToElementWithId(<App />, "root");
