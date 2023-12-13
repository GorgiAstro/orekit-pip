#ifndef org_orekit_files_ccsds_ndm_adm_apm_Euler_H
#define org_orekit_files_ccsds_ndm_adm_apm_Euler_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AttitudeEndpoints;
          }
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              class Euler : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getEulerRotSeq_513511eeab1350d5,
                  mid_getRotationAngles_25e1757a36c4dde2,
                  mid_getRotationRates_25e1757a36c4dde2,
                  mid_hasAngles_9ab94ac1dc23b105,
                  mid_hasRates_9ab94ac1dc23b105,
                  mid_isSpacecraftBodyRate_9ab94ac1dc23b105,
                  mid_rateFrameIsA_9ab94ac1dc23b105,
                  mid_setEulerRotSeq_062f1951e591952f,
                  mid_setInRotationAngles_fcb96c98de6fad04,
                  mid_setIndexedRotationAngle_d5322b8b512aeb26,
                  mid_setIndexedRotationRate_d5322b8b512aeb26,
                  mid_setLabeledRotationAngle_aff7cdf8651ba042,
                  mid_setLabeledRotationRate_aff7cdf8651ba042,
                  mid_setRateFrameIsA_fcb96c98de6fad04,
                  mid_validate_8ba9fe7a847cecad,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Euler(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Euler(const Euler& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                Euler();

                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder getEulerRotSeq() const;
                JArray< jdouble > getRotationAngles() const;
                JArray< jdouble > getRotationRates() const;
                jboolean hasAngles() const;
                jboolean hasRates() const;
                jboolean isSpacecraftBodyRate() const;
                jboolean rateFrameIsA() const;
                void setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &) const;
                void setInRotationAngles(jboolean) const;
                void setIndexedRotationAngle(jint, jdouble) const;
                void setIndexedRotationRate(jint, jdouble) const;
                void setLabeledRotationAngle(jchar, jdouble) const;
                void setLabeledRotationRate(jchar, jdouble) const;
                void setRateFrameIsA(jboolean) const;
                void validate(jdouble) const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              extern PyType_Def PY_TYPE_DEF(Euler);
              extern PyTypeObject *PY_TYPE(Euler);

              class t_Euler {
              public:
                PyObject_HEAD
                Euler object;
                static PyObject *wrap_Object(const Euler&);
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
}

#endif
