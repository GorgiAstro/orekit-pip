#ifndef org_orekit_models_earth_atmosphere_data_JB2008SpaceEnvironmentData_H
#define org_orekit_models_earth_atmosphere_data_JB2008SpaceEnvironmentData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataProvidersManager;
      class DataSource;
    }
    namespace models {
      namespace earth {
        namespace atmosphere {
          class JB2008InputParameters;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class JB2008SpaceEnvironmentData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_6a2001eff0605f71,
                mid_init$_d48a82716818091c,
                mid_init$_f59dcd76f648116b,
                mid_init$_f3b8e7d9e7dfe4ec,
                mid_getDSTDTC_bf1d7732f1acb697,
                mid_getF10_bf1d7732f1acb697,
                mid_getF10B_bf1d7732f1acb697,
                mid_getMaxDate_85703d13e302437e,
                mid_getMinDate_85703d13e302437e,
                mid_getS10_bf1d7732f1acb697,
                mid_getS10B_bf1d7732f1acb697,
                mid_getXM10_bf1d7732f1acb697,
                mid_getXM10B_bf1d7732f1acb697,
                mid_getY10_bf1d7732f1acb697,
                mid_getY10B_bf1d7732f1acb697,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JB2008SpaceEnvironmentData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              JB2008SpaceEnvironmentData(const JB2008SpaceEnvironmentData& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DEFAULT_SUPPORTED_NAMES_DTC;
              static ::java::lang::String *DEFAULT_SUPPORTED_NAMES_SOLFSMY;

              JB2008SpaceEnvironmentData(const ::java::lang::String &, const ::java::lang::String &);
              JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource &, const ::org::orekit::data::DataSource &);
              JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource &, const ::org::orekit::data::DataSource &, const ::org::orekit::time::TimeScale &);
              JB2008SpaceEnvironmentData(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);

              jdouble getDSTDTC(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getF10(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getF10B(const ::org::orekit::time::AbsoluteDate &) const;
              ::org::orekit::time::AbsoluteDate getMaxDate() const;
              ::org::orekit::time::AbsoluteDate getMinDate() const;
              jdouble getS10(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getS10B(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getXM10(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getXM10B(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getY10(const ::org::orekit::time::AbsoluteDate &) const;
              jdouble getY10B(const ::org::orekit::time::AbsoluteDate &) const;
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(JB2008SpaceEnvironmentData);
            extern PyTypeObject *PY_TYPE(JB2008SpaceEnvironmentData);

            class t_JB2008SpaceEnvironmentData {
            public:
              PyObject_HEAD
              JB2008SpaceEnvironmentData object;
              static PyObject *wrap_Object(const JB2008SpaceEnvironmentData&);
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
