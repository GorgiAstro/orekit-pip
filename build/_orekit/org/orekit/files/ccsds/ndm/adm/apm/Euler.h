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
                  mid_init$_ff7cb6c242604316,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getEulerRotSeq_503d51f00fe64860,
                  mid_getRotationAngles_be783177b060994b,
                  mid_getRotationRates_be783177b060994b,
                  mid_hasAngles_eee3de00fe971136,
                  mid_hasRates_eee3de00fe971136,
                  mid_isSpacecraftBodyRate_eee3de00fe971136,
                  mid_rateFrameIsA_eee3de00fe971136,
                  mid_setEulerRotSeq_d6989ad0241efe2c,
                  mid_setInRotationAngles_b35db77cae58639e,
                  mid_setIndexedRotationAngle_4320462275d66e78,
                  mid_setIndexedRotationRate_4320462275d66e78,
                  mid_setLabeledRotationAngle_d710506c983a8ade,
                  mid_setLabeledRotationRate_d710506c983a8ade,
                  mid_setRateFrameIsA_b35db77cae58639e,
                  mid_validate_1ad26e8c8c0cd65b,
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
