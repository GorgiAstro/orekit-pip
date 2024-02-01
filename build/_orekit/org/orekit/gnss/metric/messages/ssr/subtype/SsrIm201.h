#ifndef org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201_H
#define org_orekit_gnss_metric_messages_ssr_subtype_SsrIm201_H

#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {
              class SsrIm201Header;
              class SsrIm201Data;
            }
          }
        }
      }
    }
    namespace models {
      namespace earth {
        namespace ionosphere {
          class SsrVtecIonosphericModel;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              class SsrIm201 : public ::org::orekit::gnss::metric::messages::ssr::SsrMessage {
               public:
                enum {
                  mid_init$_6630119f2ec8d783,
                  mid_getIonosphericModel_ccd9f2307c146513,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SsrIm201(jobject obj) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SsrIm201(const SsrIm201& obj) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(obj) {}

                SsrIm201(jint, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header &, const ::java::util::List &);

                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel getIonosphericModel() const;
              };
            }
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
            namespace subtype {
              extern PyType_Def PY_TYPE_DEF(SsrIm201);
              extern PyTypeObject *PY_TYPE(SsrIm201);

              class t_SsrIm201 {
              public:
                PyObject_HEAD
                SsrIm201 object;
                PyTypeObject *parameters[2];
                static PyTypeObject **parameters_(t_SsrIm201 *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const SsrIm201&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const SsrIm201&, PyTypeObject *, PyTypeObject *);
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
}

#endif
