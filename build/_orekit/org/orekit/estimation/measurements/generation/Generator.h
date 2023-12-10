#ifndef org_orekit_estimation_measurements_generation_Generator_H
#define org_orekit_estimation_measurements_generation_Generator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        namespace generation {
          class Scheduler;
          class GeneratedMeasurementSubscriber;
        }
      }
    }
    namespace propagation {
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
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
              mid_init$_7ae3461a92a43152,
              mid_addPropagator_d9786022257b6cc4,
              mid_addScheduler_9bc1d7f21ff11af8,
              mid_addSubscriber_91c817ce1de8728a,
              mid_generate_d958a9bfde45c759,
              mid_getPropagator_e0d66209caa97f6d,
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
