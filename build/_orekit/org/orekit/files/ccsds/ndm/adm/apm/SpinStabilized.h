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
                  mid_init$_7ae3461a92a43152,
                  mid_getEndpoints_160aadf35481229b,
                  mid_getMomentumAlpha_456d9a2f64d6b28d,
                  mid_getMomentumDelta_456d9a2f64d6b28d,
                  mid_getNutation_456d9a2f64d6b28d,
                  mid_getNutationPeriod_456d9a2f64d6b28d,
                  mid_getNutationPhase_456d9a2f64d6b28d,
                  mid_getNutationVel_456d9a2f64d6b28d,
                  mid_getSpinAlpha_456d9a2f64d6b28d,
                  mid_getSpinAngle_456d9a2f64d6b28d,
                  mid_getSpinAngleVel_456d9a2f64d6b28d,
                  mid_getSpinDelta_456d9a2f64d6b28d,
                  mid_hasMomentum_e470b6d9e0d979db,
                  mid_hasNutation_e470b6d9e0d979db,
                  mid_setMomentumAlpha_77e0f9a1f260e2e5,
                  mid_setMomentumDelta_77e0f9a1f260e2e5,
                  mid_setNutation_77e0f9a1f260e2e5,
                  mid_setNutationPeriod_77e0f9a1f260e2e5,
                  mid_setNutationPhase_77e0f9a1f260e2e5,
                  mid_setNutationVel_77e0f9a1f260e2e5,
                  mid_setSpinAlpha_77e0f9a1f260e2e5,
                  mid_setSpinAngle_77e0f9a1f260e2e5,
                  mid_setSpinAngleVel_77e0f9a1f260e2e5,
                  mid_setSpinDelta_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
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
