!function(e){function t(a){if(n[a])return n[a].exports;var r=n[a]={exports:{},id:a,loaded:!1};return e[a].call(r.exports,r,r.exports,t),r.loaded=!0,r.exports}var n={};return t.m=e,t.c=n,t.p="",t(0)}([function(e,t,n){e.exports=n(6)},function(e,t){"use strict";function n(e){var t,n;try{return t=[].slice.call(e)}catch(a){t=[],n=e.length;for(var r=0;n>r;r++)t.push(e[r]);return t}}function a(e,t){return e&&e.getAttribute?e.getAttribute(t)||"":""}function r(e){return null!=e&&"object"==typeof e&&1==e.nodeType}function o(e){return e&&r(e)&&e!=document.body&&e!=document.documentElement?!0:!1}function i(){var e,t,r,o,i,d,c=n(document.getElementsByTagName("meta")),s=c.length;for(e=0;s>e;e++){switch(t=c[e],r=a(t,"name"),o=a(t,"content"),r){case m:d=o;break;case"data-bizType":i=o}if(d&&i)break}return{spmAPos:d,bizType:i}}function d(){var e=a(document.body,m);return e}function c(e){if(!o(e))return"";for(var t="";(e=e.parentNode)&&e!=document.body&&!(t=a(e,m)););return t}function s(e){if(!o(e))return null;do if(v.test(e.tagName)||e.hasAttribute(g))return e;while((e=e.parentNode)&&e!=document.body&&!a(e,m))}function f(e){if(!o(e))return"";if(v.test(e.tagName)||e.hasAttribute(g)||(e=s(e)),!e)return"";var t=a(e,g),n=e.tagName;if(("string"==typeof t||v.test(n))&&!t){var i=0,d=e;do r(d)&&n==d.tagName&&i++;while((d=d.previousSibling)&&d);t=i}return t+""}function p(){var e=d();return y=i(),y.spmAPos&&e?[y.spmAPos,e]:[]}function u(e){if(e+=""){var t=e.split(".");if(2===t.length){var n=t[0],a=t[1],r=document.querySelectorAll("meta[name=data-aspm]"),o=document.body;if(r.length)r[0].setAttribute("content",n);else{var i=document.createElement("meta");i.setAttribute("name","data-aspm"),i.setAttribute("content",n),document.head.appendChild(i)}o.setAttribute("data-aspm",a)}}}function l(e){var e=s(e),t=f(e),n={dom:e,spmId:""};if(t){var a=t.split("."),r=a.length,o=!0;switch(r){case 1:a.unshift(c(e));case 2:a.unshift(d());case 3:a.unshift(y.spmAPos)}for(var i=4,p=0;i>p;p++)if(!a[p]){o=!1;break}o&&(n.spmId=a.join("."))}return n}var m="data-aspm",g="data-aspm-click",v=/^a|area$/i,y=i();t.getPageSpm=p,t.getClickSpm=l,t.pageSpmInfo=y,t.setPageSpm=u},function(e,t,n){"use strict";function a(e,t,n){if(e=e||{},n=n||{},t instanceof Object)for(var a in t)t.hasOwnProperty(a)&&("undefined"==typeof t[a]&&n.undefToDel?delete e[a]:e[a]&&n.notOver||(e[a]=t[a]));return e}function r(e){var t=BizLog._defaultConfig;if("object"==typeof e){var n="params";e[n]&&(t[n]=a(t[n],e[n],{undefToDel:!0}));var r="mdata";e[r]&&(t[r]=a(t[r],e[r],{undefToDel:!0})),e.ucId?t.ucId=e.ucId:""===e.ucId&&delete t.ucId,t[u]="string"==typeof e[u]?e[u]:t[u],t[l]="string"==typeof e[l]?e[l]:t[l],"string"==typeof e.eventName&&(t.eventName=e.eventName),t.logLevel=e.logLevel||"",t.disabled=e.disabled===!0}}function o(e){e=e||{};var t=BizLog._defaultConfig,n="params";t[n]&&(e[n]=a(e[n],t[n],{notOver:!0}));var r="mdata";t[r]&&(e[r]=a(e[r],t[r],{notOver:!0})),t.ucId&&!e.ucId&&(e.ucId=t.ucId);var o="seedId";if(e.seedId){var i=t[u],d=t[l];i&&(e[o]=i+"-"+e[o]),d&&(e[o]=e[o]+"-"+d)}return t.logLevel&&!e.logLevel&&(e.logLevel=t.logLevel),e}function i(e,t){t=t||"^";var n,a=[];if(e instanceof Array)a=e;else if(e instanceof Object)for(n in e)e.hasOwnProperty(n)&&a.push(n+"="+e[n]);return a.join(t)}function d(e,t){if(t=t||"^","string"!=typeof e)return null;var n=e.split(t);if(-1==e.indexOf("="))return n;for(var a,r,o=n.length,i={},d=0;o>d;d++)a=n[d],a&&(r=a.split("="),i[r[0]]=r[1]||"");return i}function c(e,t){if(t.spmId&&"exposure"===t.actionId){var n=t.spmId.split(".");if(3===n.length){var a=t.spmId;if(e[a]||(e[a]={}),t.params&&t.params.rid){var r=t.params.rid;if(e[a][r]){for(var o=!1,i=0;i<e[a][r].length;i++){var d=e[a][r][i];if(d.pos===t.params.pos){o=!0;break}}o||e[a][r].push(t.params)}else e[a][r]=[],e[a][r].push(t.params)}else e[a].options=t}else n.length>3&&(n.pop(),t.spmId=n.join("."),c(e,t));return e}}function s(e){var t=[];if("object"==typeof e)for(var n in e){var a={};if(e.hasOwnProperty(n)){a.spmId=n,a.actionId="exposure";var r=[];if(e[n].options)a.param4=i(e[n].options.params);else{for(var o in e[n])if(e[n].hasOwnProperty(o)){for(var d=[],c=e[n][o],s=0;s<c.length;s++){var f=[],p=c[s];for(var u in p)p.hasOwnProperty(u)&&f.push(u+"|"+p[u]);d.push(f.join(";"))}r.push("rid|"+o+":"+d.join("&"))}a.param4="exposed="+r.join("__")}t.push(a)}}return t}var f=navigator.userAgent.toLowerCase(),p=n(1),u="seedIdPrefix",l="seedIdSuffix",m={},g=!1;e.exports={ua:f,isAlipay:f.indexOf("alipayclient")>-1,extend:a,objToStr:i,addToExObj:c,formatExObj:s,_interface:{config:r,stringify:i,parse:d,time:function(e){e+="",e&&!m[e]&&(m[e]=new Date-0)},timeEnd:function(e){if(e+="",e&&m[e]){var t=m[e],n=new Date-0-t;return delete m[e],n}},pageName:function(e){var t=BizLog._defaultConfig.mdata;return"undefined"!=typeof e&&t.pageName!==e&&(r({mdata:{pageName:e}}),BizLog.call("info",{seedId:"H5_PAGE_SET_PAGE_NAME"})),t.pageName},pageState:function(e){var t=BizLog._defaultConfig.mdata;return"undefined"!=typeof e&&t.pageState!==e&&(r({mdata:{pageState:e}}),BizLog.call("info",{seedId:"H5_PAGE_SET_PAGE_STATE"})),t.pageState},debug:function(e){return"undefined"==typeof e?g:g=!!e}},calcOptions:function(e){var t=e.params||{};if(e.mdata=e.mdata||{},"object"!=typeof t&&(t=[t+""]),e.params=t,e.timeKey){var n=BizLog.call("timeEnd",e.timeKey);n&&(e.mdata.consume=n)}var a="spmId";if("string"==typeof e[a]){var r=e[a].split("."),i=r.length;if(4>i)if(2==i){var d=p.getPageSpm();d.length?e[a]=p.getPageSpm().concat(r).join("."):delete e[a]}else 1==i&&delete e[a]}else delete e[a];var c=o(e);return c},init:function(e){function t(){var e=BizLog._readyToRun;try{var t,n,a=e.length;for(t=0;a>t;t++)n=e[t],"function"==typeof n&&n()}catch(r){}BizLog._readyToRun=[]}function n(){BizLog._isDomReady=!0,"function"==typeof e?e(t):t()}BizLog._version="1.2.14",BizLog._defaultConfig={params:{},mdata:{},seedIdPrefix:"",seedIdSuffix:"",eventName:"click"},"interactive"===document.readyState||"complete"===document.readyState?n():document.addEventListener("DOMContentLoaded",function(){n()},!1)},getValue:function(e,t){if(!e)return"";var n="";try{t=t||location.search;var a=new RegExp("(?=\\?|\\&|\\b|^)"+e+"\\=(.+?)(?=\\&|$)");n=a.exec(t),n=n?n[1]+"":"",n=decodeURIComponent(n)}catch(r){}return n},getDomParam:function(e){var t=e&&e.getAttribute?e.getAttribute("data-aspm-param")||"":"",n={};if(t){var a=t.split("^");if(-1==t.indexOf("="))n=a;else for(var r,o,i=a.length,d=0;i>d;d++)r=a[d],r&&(o=r.split("="),n[o[0]]=o[1]||"")}return n},spmClickInit:function(e,t){function n(e){var n=e.target||e.srcElement,a=p.getClickSpm(n);"object"==typeof a&&a.spmId&&"function"==typeof t.handler&&t.handler(a,n)}t=t||{};var a=e._defaultConfig.eventName||"click";document.addEventListener(a,n,!0)},apiInit:function(e,t){e._readyToRun||(e._readyToRun=[]),e.addToRun||(e.addToRun=function(t){"function"==typeof t&&(t._logTimer=new Date-0,e._readyToRun.push(t))}),e.call=function(){var n=[];try{n=[].slice.call(arguments,0)}catch(a){for(var r=arguments.length,o=0;r>o;o++)n.push(arguments[o])}if(!e._isDomReady)return void e.addToRun(function(){e.call.apply(e,n)});var i=n.shift(),d=t[i];return"function"==typeof d?d.apply(e,n):void 0}},isEmptyObj:function(e){var t=a({},e);for(var n in t)if(t.hasOwnProperty(n))return!1;return!0}}},,function(e,t,n){"use strict";function a(e){window.AlipayJSBridge&&window.AlipayJSBridge.startupParams?e():document.addEventListener("AlipayJSBridgeReady",function(){e()},!1)}function r(e){if(e.seedid&&(e.seedId=e.seedid,delete e.seedid),e.spmid&&(e.spmId=e.spmid,delete e.spmid),!e.seedId&&!e.spmId)return void console.warn("\u8bf7\u586b\u5165\u57cb\u70b9seedId\u6216spmId");if("exposure"===e.actionId&&e.spmId&&3===e.spmId.split(".").length&&e.params&&e.params.rid)return g=f.addToExObj(g,e),void(v=f.formatExObj(g));for(var t,n=f.calcOptions(e),r={seedId:n.seedId,ucId:n.ucId,bizType:p.pageSpmInfo.bizType},o=["spmId","logLevel","type","actionId"],i=o.length,d=0;i>d;d++)t=o[d],n[t]&&(r[t]=n[t]);var c=m(n.mdata);c&&(r.param4=c);var s=n.params;if(s instanceof Array)s[0]&&(r.param1=s[0]),s[1]&&(r.param2=s[1]),s[2]&&(r.param3=s[2]);else{var h=m(s);h&&(r.spmId?(c&&(f.extend(s,n.mdata),h=m(s)),r.param4=h):r.param1=h)}a(function(){AlipayJSBridge.call("remoteLog",r),l.debug()&&console.log("%cBizLog: %c"+JSON.stringify(r)+" %c"+(new Date).getTime(),"color:#0000ff","color:#000","color:#fff")}),e.usingLog||y||(y=!0,u.call("info",{seedId:"H5_BIZLOG_USINGLOG",usingLog:!0,logLevel:"3",params:[u._version]}))}function o(e){var t=[].concat(e);t.length&&u.call("info",{seedId:"H5_PAGE_DtLogMoinitor_UPLOAD",params:{dtLogMonitor:t.join(I)},logLevel:"3"})}function i(e){var t=[].concat(e),n=t.join(I),a=parseInt((new Date-0)/1e3)+"";AlipayJSBridge.call(_,{type:"preferences",business:"DTSchemeServiceImpl",key:"dtLogMonitor",value:n},function(e){}),AlipayJSBridge.call(_,{type:"preferences",business:"DTSchemeServiceImpl",key:"dtLogMonitorTime",value:a},function(e){}),u.call("info",{seedId:"H5_PAGE_DtLogMoinitor_SAVE",params:{dtLogMonitor:n,dtLogMonitorTime:a},logLevel:"3"})}function d(e){AlipayJSBridge.call(L,{type:"preferences",business:"DTSchemeServiceImpl",key:"dtLogMonitor"},function(t){var n,a="";1!==t.error&&11!==t.error&&t.data&&(a=t.data+""),"function"==typeof e&&(n=c(a),e(n))})}function c(e){var t,n={},a=[],r={},o=[];if(e)try{var i,d,c,s,f=e.split(I),p=f.length;for(d=0;p>d;d++)i=f[d],i&&(i=i.split("_"),c=i[0],s=i[1],s&&("time"===c?t=s:S[c]?(n[c]=s,a.push(c+"_"+s)):(r[c]=s,o.push(c+"_"+s))))}catch(u){}return{blackObj:n,blackArr:a,otherObj:r,otherArr:o,time:t}}function s(e){function t(){setTimeout(function(){d(function(e){var t=[];e.otherArr.length?AlipayJSBridge.call(L,{type:"preferences",business:"DTSchemeServiceImpl",key:"dtLogMonitorTime"},function(n){var a=n.data||"";t=t.concat(e.otherArr),t=t.concat(s.blackArr),a&&t.push("time_"+a),b=t.join(I),o(t)}):(t=t.concat(s.blackArr),b=t.join(I),o(t))})},10)}var n=f.getValue("dtLogMonitor")||e.dtLogMonitor;try{n=decodeURIComponent(n)}catch(a){u.call("info",{seedId:"H5_PAGE_DtLogMoinitor_PARSEERR",params:{startupDtLog:n},logLevel:"3"})}var r,s=c(n),p=(s.blackObj,s.otherObj),l=!1;for(r in A)if(p[r]){l=!0;break}!l&&s.otherArr.length||"20000837"==e.appId?d(function(e){var n=[],a=e.otherObj;if("object"==typeof a)for(r in A)a.hasOwnProperty(r)&&a[r]&&n.push(r+"_"+a[r]);n=n.concat(s.otherArr),i(n),t()}):s.otherArr.length?(i(s.otherArr),t()):t()}var f=n(2),p=n(1),u=window.BizLog||{},l=f._interface,m=f.objToStr,g={},v=[],y=!1,h={info:function(e){e instanceof Object||(e={});var t=f.extend({},e);r(t)},error:function(e){e instanceof Object||(e={});var t=f.extend({},e);t.type="error",r(t)},available:function(e){var t;e instanceof Object&&(t="object"==typeof e.params?e.params:e);var n=window.AlipayH5Performance;try{n.addTrackData({name:"timeReport",value:m(t,"|")})}catch(a){r({seedId:"H5_PAGE_TIME_REPORT",params:t,type:"performance"})}},report:function(e){e instanceof Object||(e={});var t=f.extend({},e),n=p.pageSpmInfo.bizType,a=t.spmId,r=f.getValue("chInfo")||window.AlipayJSBridge.startupParams.chInfo,o=t.params;if(a){if(n&&a){var i={spm:{spmId:a,bizType:n}};r&&(i.chInfo=r),f.isEmptyObj(o)||(i.spmDetail=o),p.getPageSpm().length&&AlipayJSBridge.call("pageMonitor",{actionType:"end"}),p.setPageSpm(a),AlipayJSBridge.call("reportData",i)}}else if(t.params instanceof Object){var i={};f.isEmptyObj(o)||(i.spmDetail=o),AlipayJSBridge.call("reportData",i)}}},I="__",b="",S={src:1,rid:1,sid:1,time:1},A={ch:1,tanxid:1,adid:1,wid:1},L="getAPDataStorage",_="setAPDataStorage";h.dtLogMonitor=function(e,t){"function"==typeof e&&(t=e),t||(t=function(){}),a(function(){if("object"!=typeof e)t(b,b);else{var n,a=c(b),r=a.blackObj,o=[];for(n in S)"time"!==n&&(e[n]&&(r[n]=e[n]),r[n]&&o.push(n+"_"+r[n]));a.time&&o.push("time_"+a.time),t(a.otherArr.concat(o).join(I),b)}})},h=f.extend(h,l,{notOver:!0}),f.apiInit(u,h),u.init=function(){f.init(function(e){a(function(){var t=window.AlipayJSBridge.startupParams;if("function"==typeof e&&e(),document.addEventListener("pause",function(e){for(var t=0;t<v.length;t++)AlipayJSBridge.call("remoteLog",v[t])},!1),document.addEventListener("back",function(e){for(var t=0;t<v.length;t++)AlipayJSBridge.call("remoteLog",v[t])},!1),document.addEventListener("beforeunload",function(e){for(var t=0;t<v.length;t++)AlipayJSBridge.call("remoteLog",v[t])},!1),!u._defaultConfig.disabled){AlipayJSBridge.call("getDTSchemeValue",{key:"dtLogMonitor"},function(e){1!=e.error&&(L="getDTSchemeValue",_="setDTSchemeValue"),s(t)});var n=p.pageSpmInfo.bizType,a=p.getPageSpm().join("."),r=f.getValue("chInfo")||t.chInfo;if(n&&a){var o={spmId:a,bizType:n};r&&(o.chInfo=r),AlipayJSBridge.call("reportData",{spm:o})}f.spmClickInit(u,{handler:function(e,t){u.call("info",{spmId:e.spmId,params:f.getDomParam(e.dom)})}})}})})},e.exports=u},,function(e,t,n){"use strict";var a=n(4);window.BizLog=a,BizLog.init()}]);