#ifndef org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H
#define org_orekit_models_earth_atmosphere_data_CssiSpaceWeatherDataLoader$LineParameters_H

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            class CssiSpaceWeatherDataLoader$LineParameters : public ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters {
             public:
              enum {
                mid_init$_579f999607b35cc8,
                mid_compareTo_b2c45b61abaea01a,
                mid_equals_65c7d273e80d497a,
                mid_getApAvg_dff5885c2c873297,
                mid_getCtr81Adj_dff5885c2c873297,
                mid_getCtr81Obs_dff5885c2c873297,
                mid_getF107Adj_dff5885c2c873297,
                mid_getF107Obs_dff5885c2c873297,
                mid_getFluxQualifier_570ce0828f81a2c1,
                mid_getKpSum_dff5885c2c873297,
                mid_getLst81Adj_dff5885c2c873297,
                mid_getLst81Obs_dff5885c2c873297,
                mid_getThreeHourlyAp_60c7040667a7dc5c,
                mid_getThreeHourlyAp_46f85b53d9aedd96,
                mid_getThreeHourlyKp_60c7040667a7dc5c,
                mid_getThreeHourlyKp_46f85b53d9aedd96,
                mid_hashCode_570ce0828f81a2c1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CssiSpaceWeatherDataLoader$LineParameters(jobject obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CssiSpaceWeatherDataLoader$LineParameters(const CssiSpaceWeatherDataLoader$LineParameters& obj) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(obj) {}

              CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, jdouble, const JArray< jdouble > &, jdouble, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble);

              jint compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jdouble getApAvg() const;
              jdouble getCtr81Adj() const;
              jdouble getCtr81Obs() const;
              jdouble getF107Adj() const;
              jdouble getF107Obs() const;
              jint getFluxQualifier() const;
              jdouble getKpSum() const;
              jdouble getLst81Adj() const;
              jdouble getLst81Obs() const;
              JArray< jdouble > getThreeHourlyAp() const;
              jdouble getThreeHourlyAp(jint) const;
              JArray< jdouble > getThreeHourlyKp() const;
              jdouble getThreeHourlyKp(jint) const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters);
            extern PyTypeObject *PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);

            class t_CssiSpaceWeatherDataLoader$LineParameters {
            public:
              PyObject_HEAD
              CssiSpaceWeatherDataLoader$LineParameters object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
