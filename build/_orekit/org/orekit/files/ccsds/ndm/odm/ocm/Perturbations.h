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
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class CelestialBodies;
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
                  mid_init$_cfbdb077cf5027f4,
                  mid_getAlbedoGridSize_412668abc8d889e9,
                  mid_getAlbedoModel_3cffd47377eca18a,
                  mid_getAtmosphericModel_3cffd47377eca18a,
                  mid_getCentralBodyRotation_557b8123390d8d0c,
                  mid_getEquatorialRadius_557b8123390d8d0c,
                  mid_getFixedF10P7_557b8123390d8d0c,
                  mid_getFixedF10P7Mean_557b8123390d8d0c,
                  mid_getFixedGeomagneticAp_557b8123390d8d0c,
                  mid_getFixedGeomagneticDst_557b8123390d8d0c,
                  mid_getFixedGeomagneticKp_557b8123390d8d0c,
                  mid_getFixedM10P7_557b8123390d8d0c,
                  mid_getFixedM10P7Mean_557b8123390d8d0c,
                  mid_getFixedS10P7_557b8123390d8d0c,
                  mid_getFixedS10P7Mean_557b8123390d8d0c,
                  mid_getFixedY10P7_557b8123390d8d0c,
                  mid_getFixedY10P7Mean_557b8123390d8d0c,
                  mid_getGm_557b8123390d8d0c,
                  mid_getGravityDegree_412668abc8d889e9,
                  mid_getGravityModel_3cffd47377eca18a,
                  mid_getGravityOrder_412668abc8d889e9,
                  mid_getInterpMethodSW_3cffd47377eca18a,
                  mid_getNBodyPerturbations_0d9551367f7ecdef,
                  mid_getOblateFlattening_557b8123390d8d0c,
                  mid_getOceanTidesModel_3cffd47377eca18a,
                  mid_getReductionTheory_3cffd47377eca18a,
                  mid_getShadowBodies_0d9551367f7ecdef,
                  mid_getShadowModel_4f569c115bfd19f6,
                  mid_getSolidTidesModel_3cffd47377eca18a,
                  mid_getSpaceWeatherEpoch_7a97f7e149e79afb,
                  mid_getSpaceWeatherSource_3cffd47377eca18a,
                  mid_getSrpModel_3cffd47377eca18a,
                  mid_setAlbedoGridSize_a3da1a935cb37f7b,
                  mid_setAlbedoModel_f5ffdf29129ef90a,
                  mid_setAtmosphericModel_f5ffdf29129ef90a,
                  mid_setCentralBodyRotation_10f281d777284cea,
                  mid_setEquatorialRadius_10f281d777284cea,
                  mid_setFixedF10P7_10f281d777284cea,
                  mid_setFixedF10P7Mean_10f281d777284cea,
                  mid_setFixedGeomagneticAp_10f281d777284cea,
                  mid_setFixedGeomagneticDst_10f281d777284cea,
                  mid_setFixedGeomagneticKp_10f281d777284cea,
                  mid_setFixedM10P7_10f281d777284cea,
                  mid_setFixedM10P7Mean_10f281d777284cea,
                  mid_setFixedS10P7_10f281d777284cea,
                  mid_setFixedS10P7Mean_10f281d777284cea,
                  mid_setFixedY10P7_10f281d777284cea,
                  mid_setFixedY10P7Mean_10f281d777284cea,
                  mid_setGm_10f281d777284cea,
                  mid_setGravityModel_96097c5e4aacac76,
                  mid_setInterpMethodSW_f5ffdf29129ef90a,
                  mid_setNBodyPerturbations_4ccaedadb068bdeb,
                  mid_setOblateFlattening_10f281d777284cea,
                  mid_setOceanTidesModel_f5ffdf29129ef90a,
                  mid_setReductionTheory_f5ffdf29129ef90a,
                  mid_setShadowBodies_4ccaedadb068bdeb,
                  mid_setShadowModel_a726b7239e493a85,
                  mid_setSolidTidesModel_f5ffdf29129ef90a,
                  mid_setSpaceWeatherEpoch_20affcbd28542333,
                  mid_setSpaceWeatherSource_f5ffdf29129ef90a,
                  mid_setSrpModel_f5ffdf29129ef90a,
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
