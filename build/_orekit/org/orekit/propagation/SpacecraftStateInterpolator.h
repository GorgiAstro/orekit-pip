#ifndef org_orekit_propagation_SpacecraftStateInterpolator_H
#define org_orekit_propagation_SpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeStampedDouble;
      class AbsoluteDate;
      class TimeInterpolator;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
    }
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace attitudes {
      class Attitude;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
    class Optional;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class SpacecraftStateInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_237ae1c2ddd68062,
          mid_init$_92e0516c51076c2f,
          mid_init$_9fa6786ed88e4116,
          mid_init$_9188826e4203adb2,
          mid_init$_4e698ca934323ab9,
          mid_init$_47a06a543038ccdd,
          mid_checkSampleAndInterpolatorConsistency_175e0bdab326549a,
          mid_checkStatesDefinitionsConsistency_0e7c3032c7c93ed3,
          mid_getAbsPVAInterpolator_9fe5189c8c3b230d,
          mid_getAdditionalStateInterpolator_9fe5189c8c3b230d,
          mid_getAttitudeInterpolator_9fe5189c8c3b230d,
          mid_getMassInterpolator_9fe5189c8c3b230d,
          mid_getNbInterpolationPoints_55546ef6a647f39b,
          mid_getOrbitInterpolator_9fe5189c8c3b230d,
          mid_getOutputFrame_2c51111cc6894ba1,
          mid_getSubInterpolators_e62d3bb06d56d7e3,
          mid_interpolate_96a2305a7aa752cc,
          mid_interpolate_5f913ee7dc803ec0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SpacecraftStateInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SpacecraftStateInterpolator(const SpacecraftStateInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        SpacecraftStateInterpolator(const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        SpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &);
        SpacecraftStateInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::time::TimeInterpolator &);

        static void checkSampleAndInterpolatorConsistency(const ::java::util::List &, jboolean, jboolean);
        static void checkStatesDefinitionsConsistency(const ::java::util::List &);
        ::java::util::Optional getAbsPVAInterpolator() const;
        ::java::util::Optional getAdditionalStateInterpolator() const;
        ::java::util::Optional getAttitudeInterpolator() const;
        ::java::util::Optional getMassInterpolator() const;
        jint getNbInterpolationPoints() const;
        ::java::util::Optional getOrbitInterpolator() const;
        ::org::orekit::frames::Frame getOutputFrame() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::propagation::SpacecraftState interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(SpacecraftStateInterpolator);
      extern PyTypeObject *PY_TYPE(SpacecraftStateInterpolator);

      class t_SpacecraftStateInterpolator {
      public:
        PyObject_HEAD
        SpacecraftStateInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SpacecraftStateInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SpacecraftStateInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SpacecraftStateInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
