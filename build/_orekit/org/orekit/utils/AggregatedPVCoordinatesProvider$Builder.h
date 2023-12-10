#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AggregatedPVCoordinatesProvider;
      class PVCoordinatesProvider;
      class AggregatedPVCoordinatesProvider$Builder;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_36de6b722535732f,
          mid_addPVProviderAfter_a4e52086d3c578e4,
          mid_addPVProviderBefore_a4e52086d3c578e4,
          mid_build_0bfa8135d82b8c5f,
          mid_invalidAfter_684b0f09aacac05d,
          mid_invalidBefore_684b0f09aacac05d,
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
