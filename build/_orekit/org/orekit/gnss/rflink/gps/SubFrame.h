#ifndef org_orekit_gnss_rflink_gps_SubFrame_H
#define org_orekit_gnss_rflink_gps_SubFrame_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          class SubFrame;
        }
      }
      namespace metric {
        namespace parser {
          class EncodedMessage;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          class SubFrame : public ::java::lang::Object {
           public:
            enum {
              mid_checkParity_638a6e940edd0ad7,
              mid_getAlert_f2f64475e4580546,
              mid_getAntiSpoofing_f2f64475e4580546,
              mid_getId_f2f64475e4580546,
              mid_getIntegrityStatus_f2f64475e4580546,
              mid_getMessage_f2f64475e4580546,
              mid_getPreamble_f2f64475e4580546,
              mid_getTow_f2f64475e4580546,
              mid_hasParityErrors_e470b6d9e0d979db,
              mid_parse_c589a1a7b473dcad,
              mid_setField_5a426df612c6b819,
              mid_setField_5b489efbe310775a,
              mid_getField_38565d58479aa24a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SubFrame(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SubFrame(const SubFrame& obj) : ::java::lang::Object(obj) {}

            static jint PREAMBLE_VALUE;

            static jboolean checkParity(jint, jint);
            jint getAlert() const;
            jint getAntiSpoofing() const;
            jint getId() const;
            jint getIntegrityStatus() const;
            jint getMessage() const;
            jint getPreamble() const;
            jint getTow() const;
            jboolean hasParityErrors() const;
            static SubFrame parse(const ::org::orekit::gnss::metric::parser::EncodedMessage &);
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
      namespace rflink {
        namespace gps {
          extern PyType_Def PY_TYPE_DEF(SubFrame);
          extern PyTypeObject *PY_TYPE(SubFrame);

          class t_SubFrame {
          public:
            PyObject_HEAD
            SubFrame object;
            static PyObject *wrap_Object(const SubFrame&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
