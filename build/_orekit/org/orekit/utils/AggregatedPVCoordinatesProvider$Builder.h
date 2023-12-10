#ifndef org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H
#define org_orekit_utils_AggregatedPVCoordinatesProvider$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AggregatedPVCoordinatesProvider;
      class AggregatedPVCoordinatesProvider$Builder;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_16cee8786fe06864,
          mid_addPVProviderAfter_d1ce544e9c100f26,
          mid_addPVProviderBefore_d1ce544e9c100f26,
          mid_build_a12b962198e2cd02,
          mid_invalidAfter_5587c9059662aa3f,
          mid_invalidBefore_5587c9059662aa3f,
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
