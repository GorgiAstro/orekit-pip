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
                mid_init$_7ae3461a92a43152,
                mid_getDcpSensitivityVectorPosition_7cdc325af0834901,
                mid_getDcpSensitivityVectorVelocity_7cdc325af0834901,
                mid_getDensityForecastUncertainty_456d9a2f64d6b28d,
                mid_getScreeningDataSource_0090f7797e403f43,
                mid_getcScaleFactor_456d9a2f64d6b28d,
                mid_getcScaleFactorMax_456d9a2f64d6b28d,
                mid_getcScaleFactorMin_456d9a2f64d6b28d,
                mid_setDcpSensitivityVectorPosition_ebc26dcaf4761286,
                mid_setDcpSensitivityVectorVelocity_ebc26dcaf4761286,
                mid_setDensityForecastUncertainty_77e0f9a1f260e2e5,
                mid_setScreeningDataSource_e939c6558ae8d313,
                mid_setcScaleFactor_77e0f9a1f260e2e5,
                mid_setcScaleFactorMax_77e0f9a1f260e2e5,
                mid_setcScaleFactorMin_77e0f9a1f260e2e5,
                mid_validate_77e0f9a1f260e2e5,
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
