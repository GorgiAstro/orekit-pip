#ifndef org_orekit_gnss_metric_messages_ssr_SsrMessage_H
#define org_orekit_gnss_metric_messages_ssr_SsrMessage_H

#include "org/orekit/gnss/metric/messages/ParsedMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            class SsrHeader;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            class SsrMessage : public ::org::orekit::gnss::metric::messages::ParsedMessage {
             public:
              enum {
                mid_init$_27c89de82255b30a,
                mid_getData_2afa36052df4765d,
                mid_getHeader_708fd611322f89cf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SsrMessage(jobject obj) : ::org::orekit::gnss::metric::messages::ParsedMessage(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SsrMessage(const SsrMessage& obj) : ::org::orekit::gnss::metric::messages::ParsedMessage(obj) {}

              SsrMessage(jint, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader &, const ::java::util::List &);

              ::java::util::List getData() const;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader getHeader() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            extern PyType_Def PY_TYPE_DEF(SsrMessage);
            extern PyTypeObject *PY_TYPE(SsrMessage);

            class t_SsrMessage {
            public:
              PyObject_HEAD
              SsrMessage object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_SsrMessage *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const SsrMessage&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const SsrMessage&, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
