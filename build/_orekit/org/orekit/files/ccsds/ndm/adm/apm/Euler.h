#ifndef org_orekit_files_ccsds_ndm_adm_apm_Euler_H
#define org_orekit_files_ccsds_ndm_adm_apm_Euler_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
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
                  mid_init$_0fa09c18fee449d5,
                  mid_getEndpoints_35bd4909c56b6915,
                  mid_getEulerRotSeq_5aea028785008a06,
                  mid_getRotationAngles_60c7040667a7dc5c,
                  mid_getRotationRates_60c7040667a7dc5c,
                  mid_hasAngles_b108b35ef48e27bd,
                  mid_hasRates_b108b35ef48e27bd,
                  mid_isSpacecraftBodyRate_b108b35ef48e27bd,
                  mid_rateFrameIsA_b108b35ef48e27bd,
                  mid_setEulerRotSeq_a908138988eb2a50,
                  mid_setInRotationAngles_bd04c9335fb9e4cf,
                  mid_setIndexedRotationAngle_bb79ca80d85d0a66,
                  mid_setIndexedRotationRate_bb79ca80d85d0a66,
                  mid_setLabeledRotationAngle_9d67fa439cabbd44,
                  mid_setLabeledRotationRate_9d67fa439cabbd44,
                  mid_setRateFrameIsA_bd04c9335fb9e4cf,
                  mid_validate_17db3a65980d3441,
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
