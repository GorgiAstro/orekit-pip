#ifndef org_orekit_files_ccsds_ndm_odm_StateVector_H
#define org_orekit_files_ccsds_ndm_odm_StateVector_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_getEpoch_c325492395d89b24,
                mid_hasAcceleration_9ab94ac1dc23b105,
                mid_setA_d5322b8b512aeb26,
                mid_setEpoch_02135a6ef25adb4b,
                mid_setP_d5322b8b512aeb26,
                mid_setV_d5322b8b512aeb26,
                mid_toTimeStampedPVCoordinates_136cc8ba23b21c29,
                mid_validate_8ba9fe7a847cecad,
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
