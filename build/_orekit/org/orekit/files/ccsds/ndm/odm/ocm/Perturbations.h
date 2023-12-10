#ifndef org_orekit_files_ccsds_ndm_odm_ocm_Perturbations_H
#define org_orekit_files_ccsds_ndm_odm_ocm_Perturbations_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ShadowModel;
            }
          }
        }
      }
    }
    namespace bodies {
      class CelestialBodies;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class Perturbations : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_d53fbcb2c3985555,
                  mid_getAlbedoGridSize_f2f64475e4580546,
                  mid_getAlbedoModel_0090f7797e403f43,
                  mid_getAtmosphericModel_0090f7797e403f43,
                  mid_getCentralBodyRotation_456d9a2f64d6b28d,
                  mid_getEquatorialRadius_456d9a2f64d6b28d,
                  mid_getFixedF10P7_456d9a2f64d6b28d,
                  mid_getFixedF10P7Mean_456d9a2f64d6b28d,
                  mid_getFixedGeomagneticAp_456d9a2f64d6b28d,
                  mid_getFixedGeomagneticDst_456d9a2f64d6b28d,
                  mid_getFixedGeomagneticKp_456d9a2f64d6b28d,
                  mid_getFixedM10P7_456d9a2f64d6b28d,
                  mid_getFixedM10P7Mean_456d9a2f64d6b28d,
                  mid_getFixedS10P7_456d9a2f64d6b28d,
                  mid_getFixedS10P7Mean_456d9a2f64d6b28d,
                  mid_getFixedY10P7_456d9a2f64d6b28d,
                  mid_getFixedY10P7Mean_456d9a2f64d6b28d,
                  mid_getGm_456d9a2f64d6b28d,
                  mid_getGravityDegree_f2f64475e4580546,
                  mid_getGravityModel_0090f7797e403f43,
                  mid_getGravityOrder_f2f64475e4580546,
                  mid_getInterpMethodSW_0090f7797e403f43,
                  mid_getNBodyPerturbations_a6156df500549a58,
                  mid_getOblateFlattening_456d9a2f64d6b28d,
                  mid_getOceanTidesModel_0090f7797e403f43,
                  mid_getReductionTheory_0090f7797e403f43,
                  mid_getShadowBodies_a6156df500549a58,
                  mid_getShadowModel_f5b8fe0ccd6e798c,
                  mid_getSolidTidesModel_0090f7797e403f43,
                  mid_getSpaceWeatherEpoch_aaa854c403487cf3,
                  mid_getSpaceWeatherSource_0090f7797e403f43,
                  mid_getSrpModel_0090f7797e403f43,
                  mid_setAlbedoGridSize_0a2a1ac2721c0336,
                  mid_setAlbedoModel_e939c6558ae8d313,
                  mid_setAtmosphericModel_e939c6558ae8d313,
                  mid_setCentralBodyRotation_77e0f9a1f260e2e5,
                  mid_setEquatorialRadius_77e0f9a1f260e2e5,
                  mid_setFixedF10P7_77e0f9a1f260e2e5,
                  mid_setFixedF10P7Mean_77e0f9a1f260e2e5,
                  mid_setFixedGeomagneticAp_77e0f9a1f260e2e5,
                  mid_setFixedGeomagneticDst_77e0f9a1f260e2e5,
                  mid_setFixedGeomagneticKp_77e0f9a1f260e2e5,
                  mid_setFixedM10P7_77e0f9a1f260e2e5,
                  mid_setFixedM10P7Mean_77e0f9a1f260e2e5,
                  mid_setFixedS10P7_77e0f9a1f260e2e5,
                  mid_setFixedS10P7Mean_77e0f9a1f260e2e5,
                  mid_setFixedY10P7_77e0f9a1f260e2e5,
                  mid_setFixedY10P7Mean_77e0f9a1f260e2e5,
                  mid_setGm_77e0f9a1f260e2e5,
                  mid_setGravityModel_10ca79ad48bfee14,
                  mid_setInterpMethodSW_e939c6558ae8d313,
                  mid_setNBodyPerturbations_65de9727799c5641,
                  mid_setOblateFlattening_77e0f9a1f260e2e5,
                  mid_setOceanTidesModel_e939c6558ae8d313,
                  mid_setReductionTheory_e939c6558ae8d313,
                  mid_setShadowBodies_65de9727799c5641,
                  mid_setShadowModel_59472393101a44da,
                  mid_setSolidTidesModel_e939c6558ae8d313,
                  mid_setSpaceWeatherEpoch_e82d68cd9f886886,
                  mid_setSpaceWeatherSource_e939c6558ae8d313,
                  mid_setSrpModel_e939c6558ae8d313,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Perturbations(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Perturbations(const Perturbations& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                Perturbations(const ::org::orekit::bodies::CelestialBodies &);

                jint getAlbedoGridSize() const;
                ::java::lang::String getAlbedoModel() const;
                ::java::lang::String getAtmosphericModel() const;
                jdouble getCentralBodyRotation() const;
                jdouble getEquatorialRadius() const;
                jdouble getFixedF10P7() const;
                jdouble getFixedF10P7Mean() const;
                jdouble getFixedGeomagneticAp() const;
                jdouble getFixedGeomagneticDst() const;
                jdouble getFixedGeomagneticKp() const;
                jdouble getFixedM10P7() const;
                jdouble getFixedM10P7Mean() const;
                jdouble getFixedS10P7() const;
                jdouble getFixedS10P7Mean() const;
                jdouble getFixedY10P7() const;
                jdouble getFixedY10P7Mean() const;
                jdouble getGm() const;
                jint getGravityDegree() const;
                ::java::lang::String getGravityModel() const;
                jint getGravityOrder() const;
                ::java::lang::String getInterpMethodSW() const;
                ::java::util::List getNBodyPerturbations() const;
                jdouble getOblateFlattening() const;
                ::java::lang::String getOceanTidesModel() const;
                ::java::lang::String getReductionTheory() const;
                ::java::util::List getShadowBodies() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel getShadowModel() const;
                ::java::lang::String getSolidTidesModel() const;
                ::org::orekit::time::AbsoluteDate getSpaceWeatherEpoch() const;
                ::java::lang::String getSpaceWeatherSource() const;
                ::java::lang::String getSrpModel() const;
                void setAlbedoGridSize(jint) const;
                void setAlbedoModel(const ::java::lang::String &) const;
                void setAtmosphericModel(const ::java::lang::String &) const;
                void setCentralBodyRotation(jdouble) const;
                void setEquatorialRadius(jdouble) const;
                void setFixedF10P7(jdouble) const;
                void setFixedF10P7Mean(jdouble) const;
                void setFixedGeomagneticAp(jdouble) const;
                void setFixedGeomagneticDst(jdouble) const;
                void setFixedGeomagneticKp(jdouble) const;
                void setFixedM10P7(jdouble) const;
                void setFixedM10P7Mean(jdouble) const;
                void setFixedS10P7(jdouble) const;
                void setFixedS10P7Mean(jdouble) const;
                void setFixedY10P7(jdouble) const;
                void setFixedY10P7Mean(jdouble) const;
                void setGm(jdouble) const;
                void setGravityModel(const ::java::lang::String &, jint, jint) const;
                void setInterpMethodSW(const ::java::lang::String &) const;
                void setNBodyPerturbations(const ::java::util::List &) const;
                void setOblateFlattening(jdouble) const;
                void setOceanTidesModel(const ::java::lang::String &) const;
                void setReductionTheory(const ::java::lang::String &) const;
                void setShadowBodies(const ::java::util::List &) const;
                void setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel &) const;
                void setSolidTidesModel(const ::java::lang::String &) const;
                void setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setSpaceWeatherSource(const ::java::lang::String &) const;
                void setSrpModel(const ::java::lang::String &) const;
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(Perturbations);
              extern PyTypeObject *PY_TYPE(Perturbations);

              class t_Perturbations {
              public:
                PyObject_HEAD
                Perturbations object;
                static PyObject *wrap_Object(const Perturbations&);
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
