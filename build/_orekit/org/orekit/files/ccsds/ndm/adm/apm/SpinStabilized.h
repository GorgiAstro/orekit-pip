#ifndef org_orekit_files_ccsds_ndm_adm_apm_SpinStabilized_H
#define org_orekit_files_ccsds_ndm_adm_apm_SpinStabilized_H

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

              class SpinStabilized : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getEndpoints_d67fadc29cf1ce4a,
                  mid_getMomentumAlpha_9981f74b2d109da6,
                  mid_getMomentumDelta_9981f74b2d109da6,
                  mid_getNutation_9981f74b2d109da6,
                  mid_getNutationPeriod_9981f74b2d109da6,
                  mid_getNutationPhase_9981f74b2d109da6,
                  mid_getNutationVel_9981f74b2d109da6,
                  mid_getSpinAlpha_9981f74b2d109da6,
                  mid_getSpinAngle_9981f74b2d109da6,
                  mid_getSpinAngleVel_9981f74b2d109da6,
                  mid_getSpinDelta_9981f74b2d109da6,
                  mid_hasMomentum_eee3de00fe971136,
                  mid_hasNutation_eee3de00fe971136,
                  mid_setMomentumAlpha_1ad26e8c8c0cd65b,
                  mid_setMomentumDelta_1ad26e8c8c0cd65b,
                  mid_setNutation_1ad26e8c8c0cd65b,
                  mid_setNutationPeriod_1ad26e8c8c0cd65b,
                  mid_setNutationPhase_1ad26e8c8c0cd65b,
                  mid_setNutationVel_1ad26e8c8c0cd65b,
                  mid_setSpinAlpha_1ad26e8c8c0cd65b,
                  mid_setSpinAngle_1ad26e8c8c0cd65b,
                  mid_setSpinAngleVel_1ad26e8c8c0cd65b,
                  mid_setSpinDelta_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit SpinStabilized(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                SpinStabilized(const SpinStabilized& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                SpinStabilized();

                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints getEndpoints() const;
                jdouble getMomentumAlpha() const;
                jdouble getMomentumDelta() const;
                jdouble getNutation() const;
                jdouble getNutationPeriod() const;
                jdouble getNutationPhase() const;
                jdouble getNutationVel() const;
                jdouble getSpinAlpha() const;
                jdouble getSpinAngle() const;
                jdouble getSpinAngleVel() const;
                jdouble getSpinDelta() const;
                jboolean hasMomentum() const;
                jboolean hasNutation() const;
                void setMomentumAlpha(jdouble) const;
                void setMomentumDelta(jdouble) const;
                void setNutation(jdouble) const;
                void setNutationPeriod(jdouble) const;
                void setNutationPhase(jdouble) const;
                void setNutationVel(jdouble) const;
                void setSpinAlpha(jdouble) const;
                void setSpinAngle(jdouble) const;
                void setSpinAngleVel(jdouble) const;
                void setSpinDelta(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(SpinStabilized);
              extern PyTypeObject *PY_TYPE(SpinStabilized);

              class t_SpinStabilized {
              public:
                PyObject_HEAD
                SpinStabilized object;
                static PyObject *wrap_Object(const SpinStabilized&);
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
