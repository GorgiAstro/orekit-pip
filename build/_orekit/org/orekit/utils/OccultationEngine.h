#ifndef org_orekit_utils_OccultationEngine_H
#define org_orekit_utils_OccultationEngine_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class OccultationEngine$OccultationAngles;
      class ExtendedPVCoordinatesProvider;
      class OccultationEngine$FieldOccultationAngles;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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

      class OccultationEngine : public ::java::lang::Object {
       public:
        enum {
          mid_init$_96b8e1d4ccad7364,
          mid_angles_df633d7a5dacbba6,
          mid_angles_9914e974952d6aaa,
          mid_getOcculted_9aa0b612d90098c2,
          mid_getOccultedRadius_557b8123390d8d0c,
          mid_getOcculting_0c55bd1adf955c4c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OccultationEngine(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OccultationEngine(const OccultationEngine& obj) : ::java::lang::Object(obj) {}

        OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, const ::org::orekit::bodies::OneAxisEllipsoid &);

        ::org::orekit::utils::OccultationEngine$FieldOccultationAngles angles(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::org::orekit::utils::OccultationEngine$OccultationAngles angles(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider getOcculted() const;
        jdouble getOccultedRadius() const;
        ::org::orekit::bodies::OneAxisEllipsoid getOcculting() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(OccultationEngine);
      extern PyTypeObject *PY_TYPE(OccultationEngine);

      class t_OccultationEngine {
      public:
        PyObject_HEAD
        OccultationEngine object;
        static PyObject *wrap_Object(const OccultationEngine&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
