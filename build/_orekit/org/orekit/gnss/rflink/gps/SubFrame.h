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
              mid_checkParity_1e0f61f59fdd7111,
              mid_getAlert_412668abc8d889e9,
              mid_getAntiSpoofing_412668abc8d889e9,
              mid_getId_412668abc8d889e9,
              mid_getIntegrityStatus_412668abc8d889e9,
              mid_getMessage_412668abc8d889e9,
              mid_getPreamble_412668abc8d889e9,
              mid_getTow_412668abc8d889e9,
              mid_hasParityErrors_89b302893bdbe1f1,
              mid_parse_80def97abbda8bbb,
              mid_setField_95509ae0fa83b970,
              mid_setField_a9571382e1de1e93,
              mid_getField_0092017e99012694,
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
