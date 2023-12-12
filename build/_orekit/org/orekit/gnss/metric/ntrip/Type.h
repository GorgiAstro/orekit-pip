#ifndef org_orekit_gnss_metric_ntrip_Type_H
#define org_orekit_gnss_metric_ntrip_Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          class Type;
        }
        namespace parser {
          class MessagesParser;
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
    class Integer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          class Type : public ::java::lang::Enum {
           public:
            enum {
              mid_getParser_cb391f06aa7575be,
              mid_valueOf_d6743ba685a1bb89,
              mid_values_3895cfc6b44fe855,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Type(const Type& obj) : ::java::lang::Enum(obj) {}

            static Type *IGS_SSR;
            static Type *RTCM;

            ::org::orekit::gnss::metric::parser::MessagesParser getParser(const ::java::util::List &) const;
            static Type valueOf(const ::java::lang::String &);
            static JArray< Type > values();
          };
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
        namespace ntrip {
          extern PyType_Def PY_TYPE_DEF(Type);
          extern PyTypeObject *PY_TYPE(Type);

          class t_Type {
          public:
            PyObject_HEAD
            Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Type&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
