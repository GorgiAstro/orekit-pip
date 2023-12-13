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
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ShadowModel;
            }
          }
        }
        namespace definitions {
          class BodyFacade;
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
                  mid_init$_5579464231259e1b,
                  mid_getAlbedoGridSize_55546ef6a647f39b,
                  mid_getAlbedoModel_1c1fa1e935d6cdcf,
                  mid_getAtmosphericModel_1c1fa1e935d6cdcf,
                  mid_getCentralBodyRotation_b74f83833fdad017,
                  mid_getEquatorialRadius_b74f83833fdad017,
                  mid_getFixedF10P7_b74f83833fdad017,
                  mid_getFixedF10P7Mean_b74f83833fdad017,
                  mid_getFixedGeomagneticAp_b74f83833fdad017,
                  mid_getFixedGeomagneticDst_b74f83833fdad017,
                  mid_getFixedGeomagneticKp_b74f83833fdad017,
                  mid_getFixedM10P7_b74f83833fdad017,
                  mid_getFixedM10P7Mean_b74f83833fdad017,
                  mid_getFixedS10P7_b74f83833fdad017,
                  mid_getFixedS10P7Mean_b74f83833fdad017,
                  mid_getFixedY10P7_b74f83833fdad017,
                  mid_getFixedY10P7Mean_b74f83833fdad017,
                  mid_getGm_b74f83833fdad017,
                  mid_getGravityDegree_55546ef6a647f39b,
                  mid_getGravityModel_1c1fa1e935d6cdcf,
                  mid_getGravityOrder_55546ef6a647f39b,
                  mid_getInterpMethodSW_1c1fa1e935d6cdcf,
                  mid_getNBodyPerturbations_e62d3bb06d56d7e3,
                  mid_getOblateFlattening_b74f83833fdad017,
                  mid_getOceanTidesModel_1c1fa1e935d6cdcf,
                  mid_getReductionTheory_1c1fa1e935d6cdcf,
                  mid_getShadowBodies_e62d3bb06d56d7e3,
                  mid_getShadowModel_e58e74e83bbfd14a,
                  mid_getSolidTidesModel_1c1fa1e935d6cdcf,
                  mid_getSpaceWeatherEpoch_c325492395d89b24,
                  mid_getSpaceWeatherSource_1c1fa1e935d6cdcf,
                  mid_getSrpModel_1c1fa1e935d6cdcf,
                  mid_setAlbedoGridSize_44ed599e93e8a30c,
                  mid_setAlbedoModel_734b91ac30d5f9b4,
                  mid_setAtmosphericModel_734b91ac30d5f9b4,
                  mid_setCentralBodyRotation_8ba9fe7a847cecad,
                  mid_setEquatorialRadius_8ba9fe7a847cecad,
                  mid_setFixedF10P7_8ba9fe7a847cecad,
                  mid_setFixedF10P7Mean_8ba9fe7a847cecad,
                  mid_setFixedGeomagneticAp_8ba9fe7a847cecad,
                  mid_setFixedGeomagneticDst_8ba9fe7a847cecad,
                  mid_setFixedGeomagneticKp_8ba9fe7a847cecad,
                  mid_setFixedM10P7_8ba9fe7a847cecad,
                  mid_setFixedM10P7Mean_8ba9fe7a847cecad,
                  mid_setFixedS10P7_8ba9fe7a847cecad,
                  mid_setFixedS10P7Mean_8ba9fe7a847cecad,
                  mid_setFixedY10P7_8ba9fe7a847cecad,
                  mid_setFixedY10P7Mean_8ba9fe7a847cecad,
                  mid_setGm_8ba9fe7a847cecad,
                  mid_setGravityModel_eb74d6dc93e0751e,
                  mid_setInterpMethodSW_734b91ac30d5f9b4,
                  mid_setNBodyPerturbations_0e7c3032c7c93ed3,
                  mid_setOblateFlattening_8ba9fe7a847cecad,
                  mid_setOceanTidesModel_734b91ac30d5f9b4,
                  mid_setReductionTheory_734b91ac30d5f9b4,
                  mid_setShadowBodies_0e7c3032c7c93ed3,
                  mid_setShadowModel_ccf2e19d6cc0caa6,
                  mid_setSolidTidesModel_734b91ac30d5f9b4,
                  mid_setSpaceWeatherEpoch_02135a6ef25adb4b,
                  mid_setSpaceWeatherSource_734b91ac30d5f9b4,
                  mid_setSrpModel_734b91ac30d5f9b4,
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
