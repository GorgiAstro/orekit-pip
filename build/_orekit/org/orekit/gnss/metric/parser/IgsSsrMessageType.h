#ifndef org_orekit_gnss_metric_parser_IgsSsrMessageType_H
#define org_orekit_gnss_metric_parser_IgsSsrMessageType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      namespace metric {
        namespace parser {
          class IgsSsrMessageType;
          class MessageType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class IgsSsrMessageType : public ::java::lang::Enum {
           public:
            enum {
              mid_getMessageType_eccccd8801842880,
              mid_getSatelliteId_1b9e19f42a845f92,
              mid_messageNumberToSatelliteSystem_c5535e7cb0a29db9,
              mid_valueOf_eccccd8801842880,
              mid_values_22d46938ec4bd22d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IgsSsrMessageType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IgsSsrMessageType(const IgsSsrMessageType& obj) : ::java::lang::Enum(obj) {}

            static IgsSsrMessageType *IGM_01;
            static IgsSsrMessageType *IGM_02;
            static IgsSsrMessageType *IGM_03;
            static IgsSsrMessageType *IGM_04;
            static IgsSsrMessageType *IGM_05;
            static IgsSsrMessageType *IGM_06;
            static IgsSsrMessageType *IGM_07;
            static IgsSsrMessageType *IM_201;

            static IgsSsrMessageType getMessageType(const ::java::lang::String &);
            static jint getSatelliteId(const ::org::orekit::gnss::SatelliteSystem &, jint);
            static ::org::orekit::gnss::SatelliteSystem messageNumberToSatelliteSystem(jint);
            static IgsSsrMessageType valueOf(const ::java::lang::String &);
            static JArray< IgsSsrMessageType > values();
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
          extern PyType_Def PY_TYPE_DEF(IgsSsrMessageType);
          extern PyTypeObject *PY_TYPE(IgsSsrMessageType);

          class t_IgsSsrMessageType {
          public:
            PyObject_HEAD
            IgsSsrMessageType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IgsSsrMessageType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IgsSsrMessageType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IgsSsrMessageType&, PyTypeObject *);
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
