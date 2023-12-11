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
                  mid_init$_0640e6acf969ed28,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getEulerRotSeq_cd8353278e08930b,
                  mid_getRotationAngles_a53a7513ecedada2,
                  mid_getRotationRates_a53a7513ecedada2,
                  mid_hasAngles_89b302893bdbe1f1,
                  mid_hasRates_89b302893bdbe1f1,
                  mid_isSpacecraftBodyRate_89b302893bdbe1f1,
                  mid_rateFrameIsA_89b302893bdbe1f1,
                  mid_setEulerRotSeq_8b9f97be929dfd52,
                  mid_setInRotationAngles_ed2afdb8506b9742,
                  mid_setIndexedRotationAngle_89aad365fb0ed8da,
                  mid_setIndexedRotationRate_89aad365fb0ed8da,
                  mid_setLabeledRotationAngle_b8c9c03aaef77ecf,
                  mid_setLabeledRotationRate_b8c9c03aaef77ecf,
                  mid_setRateFrameIsA_ed2afdb8506b9742,
                  mid_validate_10f281d777284cea,
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
