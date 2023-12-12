#ifndef org_orekit_files_ccsds_ndm_adm_apm_SpinStabilized_H
#define org_orekit_files_ccsds_ndm_adm_apm_SpinStabilized_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                  mid_init$_0640e6acf969ed28,
                  mid_getEndpoints_c66f753ddee38944,
                  mid_getMomentumAlpha_557b8123390d8d0c,
                  mid_getMomentumDelta_557b8123390d8d0c,
                  mid_getNutation_557b8123390d8d0c,
                  mid_getNutationPeriod_557b8123390d8d0c,
                  mid_getNutationPhase_557b8123390d8d0c,
                  mid_getNutationVel_557b8123390d8d0c,
                  mid_getSpinAlpha_557b8123390d8d0c,
                  mid_getSpinAngle_557b8123390d8d0c,
                  mid_getSpinAngleVel_557b8123390d8d0c,
                  mid_getSpinDelta_557b8123390d8d0c,
                  mid_hasMomentum_89b302893bdbe1f1,
                  mid_hasNutation_89b302893bdbe1f1,
                  mid_setMomentumAlpha_10f281d777284cea,
                  mid_setMomentumDelta_10f281d777284cea,
                  mid_setNutation_10f281d777284cea,
                  mid_setNutationPeriod_10f281d777284cea,
                  mid_setNutationPhase_10f281d777284cea,
                  mid_setNutationVel_10f281d777284cea,
                  mid_setSpinAlpha_10f281d777284cea,
                  mid_setSpinAngle_10f281d777284cea,
                  mid_setSpinAngleVel_10f281d777284cea,
                  mid_setSpinDelta_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
