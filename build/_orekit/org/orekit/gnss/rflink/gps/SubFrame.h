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
              mid_checkParity_905dfe1f877a03f0,
              mid_getAlert_d6ab429752e7c267,
              mid_getAntiSpoofing_d6ab429752e7c267,
              mid_getId_d6ab429752e7c267,
              mid_getIntegrityStatus_d6ab429752e7c267,
              mid_getMessage_d6ab429752e7c267,
              mid_getPreamble_d6ab429752e7c267,
              mid_getTow_d6ab429752e7c267,
              mid_hasParityErrors_eee3de00fe971136,
              mid_parse_864a31960b2549e6,
              mid_setField_e080df48b0affee3,
              mid_setField_335b1e2c249b9526,
              mid_getField_d938fc64e8c6df2d,
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
