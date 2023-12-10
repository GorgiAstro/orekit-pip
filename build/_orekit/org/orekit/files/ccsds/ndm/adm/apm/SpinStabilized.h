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
                  mid_init$_0fa09c18fee449d5,
                  mid_getEndpoints_35bd4909c56b6915,
                  mid_getMomentumAlpha_dff5885c2c873297,
                  mid_getMomentumDelta_dff5885c2c873297,
                  mid_getNutation_dff5885c2c873297,
                  mid_getNutationPeriod_dff5885c2c873297,
                  mid_getNutationPhase_dff5885c2c873297,
                  mid_getNutationVel_dff5885c2c873297,
                  mid_getSpinAlpha_dff5885c2c873297,
                  mid_getSpinAngle_dff5885c2c873297,
                  mid_getSpinAngleVel_dff5885c2c873297,
                  mid_getSpinDelta_dff5885c2c873297,
                  mid_hasMomentum_b108b35ef48e27bd,
                  mid_hasNutation_b108b35ef48e27bd,
                  mid_setMomentumAlpha_17db3a65980d3441,
                  mid_setMomentumDelta_17db3a65980d3441,
                  mid_setNutation_17db3a65980d3441,
                  mid_setNutationPeriod_17db3a65980d3441,
                  mid_setNutationPhase_17db3a65980d3441,
                  mid_setNutationVel_17db3a65980d3441,
                  mid_setSpinAlpha_17db3a65980d3441,
                  mid_setSpinAngle_17db3a65980d3441,
                  mid_setSpinAngleVel_17db3a65980d3441,
                  mid_setSpinDelta_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
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
