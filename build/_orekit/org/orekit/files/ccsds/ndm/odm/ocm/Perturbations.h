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
    namespace time {
      class AbsoluteDate;
    }
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
                  mid_init$_793ac08908193b1e,
                  mid_getAlbedoGridSize_d6ab429752e7c267,
                  mid_getAlbedoModel_d2c8eb4129821f0e,
                  mid_getAtmosphericModel_d2c8eb4129821f0e,
                  mid_getCentralBodyRotation_9981f74b2d109da6,
                  mid_getEquatorialRadius_9981f74b2d109da6,
                  mid_getFixedF10P7_9981f74b2d109da6,
                  mid_getFixedF10P7Mean_9981f74b2d109da6,
                  mid_getFixedGeomagneticAp_9981f74b2d109da6,
                  mid_getFixedGeomagneticDst_9981f74b2d109da6,
                  mid_getFixedGeomagneticKp_9981f74b2d109da6,
                  mid_getFixedM10P7_9981f74b2d109da6,
                  mid_getFixedM10P7Mean_9981f74b2d109da6,
                  mid_getFixedS10P7_9981f74b2d109da6,
                  mid_getFixedS10P7Mean_9981f74b2d109da6,
                  mid_getFixedY10P7_9981f74b2d109da6,
                  mid_getFixedY10P7Mean_9981f74b2d109da6,
                  mid_getGm_9981f74b2d109da6,
                  mid_getGravityDegree_d6ab429752e7c267,
                  mid_getGravityModel_d2c8eb4129821f0e,
                  mid_getGravityOrder_d6ab429752e7c267,
                  mid_getInterpMethodSW_d2c8eb4129821f0e,
                  mid_getNBodyPerturbations_d751c1a57012b438,
                  mid_getOblateFlattening_9981f74b2d109da6,
                  mid_getOceanTidesModel_d2c8eb4129821f0e,
                  mid_getReductionTheory_d2c8eb4129821f0e,
                  mid_getShadowBodies_d751c1a57012b438,
                  mid_getShadowModel_384f8b83ce262c6d,
                  mid_getSolidTidesModel_d2c8eb4129821f0e,
                  mid_getSpaceWeatherEpoch_80e11148db499dda,
                  mid_getSpaceWeatherSource_d2c8eb4129821f0e,
                  mid_getSrpModel_d2c8eb4129821f0e,
                  mid_setAlbedoGridSize_8fd427ab23829bf5,
                  mid_setAlbedoModel_105e1eadb709d9ac,
                  mid_setAtmosphericModel_105e1eadb709d9ac,
                  mid_setCentralBodyRotation_1ad26e8c8c0cd65b,
                  mid_setEquatorialRadius_1ad26e8c8c0cd65b,
                  mid_setFixedF10P7_1ad26e8c8c0cd65b,
                  mid_setFixedF10P7Mean_1ad26e8c8c0cd65b,
                  mid_setFixedGeomagneticAp_1ad26e8c8c0cd65b,
                  mid_setFixedGeomagneticDst_1ad26e8c8c0cd65b,
                  mid_setFixedGeomagneticKp_1ad26e8c8c0cd65b,
                  mid_setFixedM10P7_1ad26e8c8c0cd65b,
                  mid_setFixedM10P7Mean_1ad26e8c8c0cd65b,
                  mid_setFixedS10P7_1ad26e8c8c0cd65b,
                  mid_setFixedS10P7Mean_1ad26e8c8c0cd65b,
                  mid_setFixedY10P7_1ad26e8c8c0cd65b,
                  mid_setFixedY10P7Mean_1ad26e8c8c0cd65b,
                  mid_setGm_1ad26e8c8c0cd65b,
                  mid_setGravityModel_c9a77c84756b106b,
                  mid_setInterpMethodSW_105e1eadb709d9ac,
                  mid_setNBodyPerturbations_aa335fea495d60e0,
                  mid_setOblateFlattening_1ad26e8c8c0cd65b,
                  mid_setOceanTidesModel_105e1eadb709d9ac,
                  mid_setReductionTheory_105e1eadb709d9ac,
                  mid_setShadowBodies_aa335fea495d60e0,
                  mid_setShadowModel_96bc3dfff38fb961,
                  mid_setSolidTidesModel_105e1eadb709d9ac,
                  mid_setSpaceWeatherEpoch_8497861b879c83f7,
                  mid_setSpaceWeatherSource_105e1eadb709d9ac,
                  mid_setSrpModel_105e1eadb709d9ac,
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
