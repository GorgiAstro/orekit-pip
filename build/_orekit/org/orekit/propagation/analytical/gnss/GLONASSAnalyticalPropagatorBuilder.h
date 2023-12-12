#ifndef org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GLONASSAnalyticalPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GLONASSAnalyticalPropagatorBuilder;
          class GLONASSAnalyticalPropagator;
          namespace data {
            class GLONASSOrbitalElements;
          }
        }
      }
    }
    namespace data {
      class DataContext;
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
    namespace propagation {
      namespace analytical {
        namespace gnss {

          class GLONASSAnalyticalPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_288e58e8962e6403,
              mid_init$_4f0bf06544a648db,
              mid_attitudeProvider_f2b07e16ed5ef284,
              mid_build_2bdec6e86d80c4e6,
              mid_dataContext_7e49273d33bbb3c6,
              mid_ecef_c84e8cca474e689b,
              mid_eci_c84e8cca474e689b,
              mid_mass_422d3e2b895a53cd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GLONASSAnalyticalPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GLONASSAnalyticalPropagatorBuilder(const GLONASSAnalyticalPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

            GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &);
            GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements &, const ::org::orekit::data::DataContext &);

            GLONASSAnalyticalPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator build() const;
            GLONASSAnalyticalPropagatorBuilder dataContext(const ::org::orekit::data::DataContext &) const;
            GLONASSAnalyticalPropagatorBuilder ecef(const ::org::orekit::frames::Frame &) const;
            GLONASSAnalyticalPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
            GLONASSAnalyticalPropagatorBuilder mass(jdouble) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder);
          extern PyTypeObject *PY_TYPE(GLONASSAnalyticalPropagatorBuilder);

          class t_GLONASSAnalyticalPropagatorBuilder {
          public:
            PyObject_HEAD
            GLONASSAnalyticalPropagatorBuilder object;
            static PyObject *wrap_Object(const GLONASSAnalyticalPropagatorBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
