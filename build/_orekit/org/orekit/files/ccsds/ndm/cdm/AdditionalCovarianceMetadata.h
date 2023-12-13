#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class AdditionalCovarianceMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getDcpSensitivityVectorPosition_25e1757a36c4dde2,
                mid_getDcpSensitivityVectorVelocity_25e1757a36c4dde2,
                mid_getDensityForecastUncertainty_b74f83833fdad017,
                mid_getScreeningDataSource_1c1fa1e935d6cdcf,
                mid_getcScaleFactor_b74f83833fdad017,
                mid_getcScaleFactorMax_b74f83833fdad017,
                mid_getcScaleFactorMin_b74f83833fdad017,
                mid_setDcpSensitivityVectorPosition_ab69da052b88f50c,
                mid_setDcpSensitivityVectorVelocity_ab69da052b88f50c,
                mid_setDensityForecastUncertainty_8ba9fe7a847cecad,
                mid_setScreeningDataSource_734b91ac30d5f9b4,
                mid_setcScaleFactor_8ba9fe7a847cecad,
                mid_setcScaleFactorMax_8ba9fe7a847cecad,
                mid_setcScaleFactorMin_8ba9fe7a847cecad,
                mid_validate_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalCovarianceMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalCovarianceMetadata(const AdditionalCovarianceMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              AdditionalCovarianceMetadata();

              JArray< jdouble > getDcpSensitivityVectorPosition() const;
              JArray< jdouble > getDcpSensitivityVectorVelocity() const;
              jdouble getDensityForecastUncertainty() const;
              ::java::lang::String getScreeningDataSource() const;
              jdouble getcScaleFactor() const;
              jdouble getcScaleFactorMax() const;
              jdouble getcScaleFactorMin() const;
              void setDcpSensitivityVectorPosition(const JArray< jdouble > &) const;
              void setDcpSensitivityVectorVelocity(const JArray< jdouble > &) const;
              void setDensityForecastUncertainty(jdouble) const;
              void setScreeningDataSource(const ::java::lang::String &) const;
              void setcScaleFactor(jdouble) const;
              void setcScaleFactorMax(jdouble) const;
              void setcScaleFactorMin(jdouble) const;
              void validate(jdouble) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(AdditionalCovarianceMetadata);
            extern PyTypeObject *PY_TYPE(AdditionalCovarianceMetadata);

            class t_AdditionalCovarianceMetadata {
            public:
              PyObject_HEAD
              AdditionalCovarianceMetadata object;
              static PyObject *wrap_Object(const AdditionalCovarianceMetadata&);
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

#endif
