#ifndef org_orekit_gnss_metric_parser_IgsSsrDataField_H
#define org_orekit_gnss_metric_parser_IgsSsrDataField_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class DataField;
          class IgsSsrDataField;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class IgsSsrDataField : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_29191d171c2347fd,
              mid_values_b0269f4adcb9f36b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IgsSsrDataField(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IgsSsrDataField(const IgsSsrDataField& obj) : ::java::lang::Enum(obj) {}

            static IgsSsrDataField *IDF001;
            static IgsSsrDataField *IDF002;
            static IgsSsrDataField *IDF003;
            static IgsSsrDataField *IDF004;
            static IgsSsrDataField *IDF005;
            static IgsSsrDataField *IDF006;
            static IgsSsrDataField *IDF007;
            static IgsSsrDataField *IDF008;
            static IgsSsrDataField *IDF009;
            static IgsSsrDataField *IDF010;
            static IgsSsrDataField *IDF011;
            static IgsSsrDataField *IDF012;
            static IgsSsrDataField *IDF013;
            static IgsSsrDataField *IDF014;
            static IgsSsrDataField *IDF015;
            static IgsSsrDataField *IDF016;
            static IgsSsrDataField *IDF017;
            static IgsSsrDataField *IDF018;
            static IgsSsrDataField *IDF019;
            static IgsSsrDataField *IDF020;
            static IgsSsrDataField *IDF021;
            static IgsSsrDataField *IDF022;
            static IgsSsrDataField *IDF023;
            static IgsSsrDataField *IDF024;
            static IgsSsrDataField *IDF025;
            static IgsSsrDataField *IDF026;
            static IgsSsrDataField *IDF027;
            static IgsSsrDataField *IDF028;
            static IgsSsrDataField *IDF029;
            static IgsSsrDataField *IDF030;
            static IgsSsrDataField *IDF031;
            static IgsSsrDataField *IDF032;
            static IgsSsrDataField *IDF033;
            static IgsSsrDataField *IDF034;
            static IgsSsrDataField *IDF035;
            static IgsSsrDataField *IDF036;
            static IgsSsrDataField *IDF037;
            static IgsSsrDataField *IDF038;
            static IgsSsrDataField *IDF039;
            static IgsSsrDataField *IDF040;
            static IgsSsrDataField *IDF041;

            static IgsSsrDataField valueOf(const ::java::lang::String &);
            static JArray< IgsSsrDataField > values();
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
        namespace parser {
          extern PyType_Def PY_TYPE_DEF(IgsSsrDataField);
          extern PyTypeObject *PY_TYPE(IgsSsrDataField);

          class t_IgsSsrDataField {
          public:
            PyObject_HEAD
            IgsSsrDataField object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IgsSsrDataField *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IgsSsrDataField&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IgsSsrDataField&, PyTypeObject *);
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
