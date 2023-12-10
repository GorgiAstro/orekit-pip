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
                  mid_init$_7ae3461a92a43152,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getEulerRotSeq_425debac8563c8f4,
                  mid_getRotationAngles_7cdc325af0834901,
                  mid_getRotationRates_7cdc325af0834901,
                  mid_hasAngles_e470b6d9e0d979db,
                  mid_hasRates_e470b6d9e0d979db,
                  mid_isSpacecraftBodyRate_e470b6d9e0d979db,
                  mid_rateFrameIsA_e470b6d9e0d979db,
                  mid_setEulerRotSeq_3c290f1c2c08ff0e,
                  mid_setInRotationAngles_50a2e0b139e80a58,
                  mid_setIndexedRotationAngle_987a5fb872043b12,
                  mid_setIndexedRotationRate_987a5fb872043b12,
                  mid_setLabeledRotationAngle_bab298509bfd5390,
                  mid_setLabeledRotationRate_bab298509bfd5390,
                  mid_setRateFrameIsA_50a2e0b139e80a58,
                  mid_validate_77e0f9a1f260e2e5,
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
