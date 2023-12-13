#ifndef org_orekit_utils_ParameterDriver_H
#define org_orekit_utils_ParameterDriver_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Integer;
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterObserver;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3644a0740275e98a,
          mid_init$_ede0d75970ba1e8b,
          mid_addObserver_0d369fd1d1233ad6,
          mid_addSpanAtDate_02135a6ef25adb4b,
          mid_addSpans_d6176fd55d408ce8,
          mid_getMaxValue_b74f83833fdad017,
          mid_getMinValue_b74f83833fdad017,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getNameSpan_5b3583dbfd578a63,
          mid_getNamesSpanMap_2f46b86c016957a0,
          mid_getNbOfValues_55546ef6a647f39b,
          mid_getNormalizedValue_b74f83833fdad017,
          mid_getNormalizedValue_fd347811007a6ba3,
          mid_getObservers_e62d3bb06d56d7e3,
          mid_getReferenceDate_c325492395d89b24,
          mid_getReferenceValue_b74f83833fdad017,
          mid_getScale_b74f83833fdad017,
          mid_getTransitionDates_181973466f9ea0c5,
          mid_getValue_b74f83833fdad017,
          mid_getValue_fd347811007a6ba3,
          mid_getValue_1a6b4946b0edd7a2,
          mid_getValue_6d5abadb2f6328c2,
          mid_getValueContinuousEstimation_fd347811007a6ba3,
          mid_getValueSpanMap_2f46b86c016957a0,
          mid_getValueStepEstimation_fd347811007a6ba3,
          mid_getValues_25e1757a36c4dde2,
          mid_isContinuousEstimation_9ab94ac1dc23b105,
          mid_isSelected_9ab94ac1dc23b105,
          mid_removeObserver_0d369fd1d1233ad6,
          mid_replaceObserver_b13cdfbcabe95c73,
          mid_setContinuousEstimation_fcb96c98de6fad04,
          mid_setMaxValue_8ba9fe7a847cecad,
          mid_setMinValue_8ba9fe7a847cecad,
          mid_setName_734b91ac30d5f9b4,
          mid_setNormalizedValue_8ba9fe7a847cecad,
          mid_setNormalizedValue_98ef3c02384a4218,
          mid_setReferenceDate_02135a6ef25adb4b,
          mid_setReferenceValue_8ba9fe7a847cecad,
          mid_setScale_8ba9fe7a847cecad,
          mid_setSelected_fcb96c98de6fad04,
          mid_setValue_8ba9fe7a847cecad,
          mid_setValue_98ef3c02384a4218,
          mid_setValueSpanMap_5791d10af4720a8e,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriver(const ParameterDriver& obj) : ::java::lang::Object(obj) {}

        ParameterDriver(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
        ParameterDriver(const ::java::lang::String &, const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::utils::TimeSpanMap &, jdouble, jdouble, jdouble, jdouble);

        void addObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void addSpanAtDate(const ::org::orekit::time::AbsoluteDate &) const;
        void addSpans(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        jdouble getMaxValue() const;
        jdouble getMinValue() const;
        ::java::lang::String getName() const;
        ::java::lang::String getNameSpan(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getNamesSpanMap() const;
        jint getNbOfValues() const;
        jdouble getNormalizedValue() const;
        jdouble getNormalizedValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::java::util::List getObservers() const;
        ::org::orekit::time::AbsoluteDate getReferenceDate() const;
        jdouble getReferenceValue() const;
        jdouble getScale() const;
        JArray< ::org::orekit::time::AbsoluteDate > getTransitionDates() const;
        jdouble getValue() const;
        jdouble getValue(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &) const;
        ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, const ::java::util::Map &, const ::org::orekit::time::AbsoluteDate &) const;
        jdouble getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::utils::TimeSpanMap getValueSpanMap() const;
        jdouble getValueStepEstimation(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< jdouble > getValues() const;
        jboolean isContinuousEstimation() const;
        jboolean isSelected() const;
        void removeObserver(const ::org::orekit::utils::ParameterObserver &) const;
        void replaceObserver(const ::org::orekit::utils::ParameterObserver &, const ::org::orekit::utils::ParameterObserver &) const;
        void setContinuousEstimation(jboolean) const;
        void setMaxValue(jdouble) const;
        void setMinValue(jdouble) const;
        void setName(const ::java::lang::String &) const;
        void setNormalizedValue(jdouble) const;
        void setNormalizedValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
        void setReferenceValue(jdouble) const;
        void setScale(jdouble) const;
        void setSelected(jboolean) const;
        void setValue(jdouble) const;
        void setValue(jdouble, const ::org::orekit::time::AbsoluteDate &) const;
        void setValueSpanMap(const ParameterDriver &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriver);
      extern PyTypeObject *PY_TYPE(ParameterDriver);

      class t_ParameterDriver {
      public:
        PyObject_HEAD
        ParameterDriver object;
        static PyObject *wrap_Object(const ParameterDriver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
