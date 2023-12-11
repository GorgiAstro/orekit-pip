#ifndef org_orekit_files_ccsds_ndm_odm_StateVector_H
#define org_orekit_files_ccsds_ndm_odm_StateVector_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class StateVector : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getEpoch_7a97f7e149e79afb,
                mid_hasAcceleration_89b302893bdbe1f1,
                mid_setA_89aad365fb0ed8da,
                mid_setEpoch_20affcbd28542333,
                mid_setP_89aad365fb0ed8da,
                mid_setV_89aad365fb0ed8da,
                mid_toTimeStampedPVCoordinates_daf15abc21907508,
                mid_validate_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit StateVector(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              StateVector(const StateVector& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              StateVector();

              ::org::orekit::time::AbsoluteDate getEpoch() const;
              jboolean hasAcceleration() const;
              void setA(jint, jdouble) const;
              void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
              void setP(jint, jdouble) const;
              void setV(jint, jdouble) const;
              ::org::orekit::utils::TimeStampedPVCoordinates toTimeStampedPVCoordinates() const;
              void validate(jdouble) const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(StateVector);
            extern PyTypeObject *PY_TYPE(StateVector);

            class t_StateVector {
            public:
              PyObject_HEAD
              StateVector object;
              static PyObject *wrap_Object(const StateVector&);
              static PyObject *wrap_jobject(const jobject&);
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
