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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getEndpoints_c60ad1d207bc8e06,
                  mid_getMomentumAlpha_b74f83833fdad017,
                  mid_getMomentumDelta_b74f83833fdad017,
                  mid_getNutation_b74f83833fdad017,
                  mid_getNutationPeriod_b74f83833fdad017,
                  mid_getNutationPhase_b74f83833fdad017,
                  mid_getNutationVel_b74f83833fdad017,
                  mid_getSpinAlpha_b74f83833fdad017,
                  mid_getSpinAngle_b74f83833fdad017,
                  mid_getSpinAngleVel_b74f83833fdad017,
                  mid_getSpinDelta_b74f83833fdad017,
                  mid_hasMomentum_9ab94ac1dc23b105,
                  mid_hasNutation_9ab94ac1dc23b105,
                  mid_setMomentumAlpha_8ba9fe7a847cecad,
                  mid_setMomentumDelta_8ba9fe7a847cecad,
                  mid_setNutation_8ba9fe7a847cecad,
                  mid_setNutationPeriod_8ba9fe7a847cecad,
                  mid_setNutationPhase_8ba9fe7a847cecad,
                  mid_setNutationVel_8ba9fe7a847cecad,
                  mid_setSpinAlpha_8ba9fe7a847cecad,
                  mid_setSpinAngle_8ba9fe7a847cecad,
                  mid_setSpinAngleVel_8ba9fe7a847cecad,
                  mid_setSpinDelta_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
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
