#ifndef org_orekit_estimation_measurements_generation_Generator_H
#define org_orekit_estimation_measurements_generation_Generator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          class Scheduler;
          class GeneratedMeasurementSubscriber;
        }
        class ObservableSatellite;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class Propagator;
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
    namespace estimation {
      namespace measurements {
        namespace generation {

          class Generator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_addPropagator_24da3534b19b4622,
              mid_addScheduler_4c82e772d674afd6,
              mid_addSubscriber_b237d6053fe0e3ed,
              mid_generate_ce7d94fe97fdcf55,
              mid_getPropagator_bc6ccfd343befb27,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Generator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Generator(const Generator& obj) : ::java::lang::Object(obj) {}

            Generator();

            ::org::orekit::estimation::measurements::ObservableSatellite addPropagator(const ::org::orekit::propagation::Propagator &) const;
            void addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler &) const;
            void addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber &) const;
            void generate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
            ::org::orekit::propagation::Propagator getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          extern PyType_Def PY_TYPE_DEF(Generator);
          extern PyTypeObject *PY_TYPE(Generator);

          class t_Generator {
          public:
            PyObject_HEAD
            Generator object;
            static PyObject *wrap_Object(const Generator&);
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
