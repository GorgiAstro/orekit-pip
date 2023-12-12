#ifndef org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H
#define org_orekit_propagation_analytical_gnss_GNSSPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          class GNSSPropagator;
          class GNSSPropagatorBuilder;
          namespace data {
            class GNSSOrbitalElements;
          }
        }
      }
    }
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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

          class GNSSPropagatorBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_cc589ac293e044f3,
              mid_init$_b911d08072198cf6,
              mid_attitudeProvider_887cdac6f079f08a,
              mid_build_2d63e0224266d4a7,
              mid_ecef_c41ad29c243e2ca5,
              mid_eci_c41ad29c243e2ca5,
              mid_mass_a35b0fd2d45b0aa1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GNSSPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GNSSPropagatorBuilder(const GNSSPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

            GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements &);
            GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements &, const ::org::orekit::frames::Frames &);

            GNSSPropagatorBuilder attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator build() const;
            GNSSPropagatorBuilder ecef(const ::org::orekit::frames::Frame &) const;
            GNSSPropagatorBuilder eci(const ::org::orekit::frames::Frame &) const;
            GNSSPropagatorBuilder mass(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GNSSPropagatorBuilder);
          extern PyTypeObject *PY_TYPE(GNSSPropagatorBuilder);

          class t_GNSSPropagatorBuilder {
          public:
            PyObject_HEAD
            GNSSPropagatorBuilder object;
            static PyObject *wrap_Object(const GNSSPropagatorBuilder&);
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
