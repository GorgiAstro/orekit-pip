#ifndef org_orekit_files_ccsds_ndm_odm_StateVector_H
#define org_orekit_files_ccsds_ndm_odm_StateVector_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
                mid_init$_ff7cb6c242604316,
                mid_getEpoch_80e11148db499dda,
                mid_hasAcceleration_eee3de00fe971136,
                mid_setA_4320462275d66e78,
                mid_setEpoch_8497861b879c83f7,
                mid_setP_4320462275d66e78,
                mid_setV_4320462275d66e78,
                mid_toTimeStampedPVCoordinates_674031698a428ce8,
                mid_validate_1ad26e8c8c0cd65b,
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
