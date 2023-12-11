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
          mid_init$_0640e6acf969ed28,
          mid_init$_89227d950841a6f5,
          mid_addPVProviderAfter_91816397f6065003,
          mid_addPVProviderBefore_91816397f6065003,
          mid_build_5950ada932adf178,
          mid_invalidAfter_034efa53a4f26e25,
          mid_invalidBefore_034efa53a4f26e25,
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
