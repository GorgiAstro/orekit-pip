#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AggregatedPVCoordinatesProvider$Builder;
      class AggregatedPVCoordinatesProvider;
      class PVCoordinatesProvider;
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
    namespace utils {

      class AggregatedPVCoordinatesProvider$Builder : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_478a81392f58970d,
          mid_addPVProviderAfter_ecfa93deb608008c,
          mid_addPVProviderBefore_ecfa93deb608008c,
          mid_build_3b84d0832f3228c6,
          mid_invalidAfter_36d4c41e3a6db324,
          mid_invalidBefore_36d4c41e3a6db324,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AggregatedPVCoordinatesProvider$Builder(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AggregatedPVCoordinatesProvider$Builder(const AggregatedPVCoordinatesProvider$Builder& obj) : ::java::lang::Object(obj) {}

        AggregatedPVCoordinatesProvider$Builder();
        AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider &);

        AggregatedPVCoordinatesProvider$Builder addPVProviderAfter(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinatesProvider &, jboolean) const;
        AggregatedPVCoordinatesProvider$Builder addPVProviderBefore(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::PVCoordinatesProvider &, jboolean) const;
        ::org::orekit::utils::AggregatedPVCoordinatesProvider build() const;
        AggregatedPVCoordinatesProvider$Builder invalidAfter(const ::org::orekit::time::AbsoluteDate &) const;
        AggregatedPVCoordinatesProvider$Builder invalidBefore(const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder);
      extern PyTypeObject *PY_TYPE(AggregatedPVCoordinatesProvider$Builder);

      class t_AggregatedPVCoordinatesProvider$Builder {
      public:
        PyObject_HEAD
        AggregatedPVCoordinatesProvider$Builder object;
        static PyObject *wrap_Object(const AggregatedPVCoordinatesProvider$Builder&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
