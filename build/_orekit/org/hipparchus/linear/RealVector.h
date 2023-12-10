#ifndef org_hipparchus_linear_RealVector_H
#define org_hipparchus_linear_RealVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVectorPreservingVisitor;
      class RealVectorChangingVisitor;
      class RealVector;
      class RealMatrix;
      class RealVector$Entry;
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_add_613347e28dd909cd,
          mid_addToEntry_bb79ca80d85d0a66,
          mid_append_613347e28dd909cd,
          mid_append_5df18376713b9c4f,
          mid_combine_62008467377fb126,
          mid_combineToSelf_62008467377fb126,
          mid_copy_aab4fbf77867daa8,
          mid_cosine_c579a73494d20c67,
          mid_dotProduct_c579a73494d20c67,
          mid_ebeDivide_613347e28dd909cd,
          mid_ebeMultiply_613347e28dd909cd,
          mid_equals_65c7d273e80d497a,
          mid_getDimension_570ce0828f81a2c1,
          mid_getDistance_c579a73494d20c67,
          mid_getEntry_46f85b53d9aedd96,
          mid_getL1Distance_c579a73494d20c67,
          mid_getL1Norm_dff5885c2c873297,
          mid_getLInfDistance_c579a73494d20c67,
          mid_getLInfNorm_dff5885c2c873297,
          mid_getMaxIndex_570ce0828f81a2c1,
          mid_getMaxValue_dff5885c2c873297,
          mid_getMinIndex_570ce0828f81a2c1,
          mid_getMinValue_dff5885c2c873297,
          mid_getNorm_dff5885c2c873297,
          mid_getSubVector_38329ff0125c5584,
          mid_hashCode_570ce0828f81a2c1,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_iterator_4d23511a9f0db098,
          mid_map_ad908208161b523f,
          mid_mapAdd_5df18376713b9c4f,
          mid_mapAddToSelf_5df18376713b9c4f,
          mid_mapDivide_5df18376713b9c4f,
          mid_mapDivideToSelf_5df18376713b9c4f,
          mid_mapMultiply_5df18376713b9c4f,
          mid_mapMultiplyToSelf_5df18376713b9c4f,
          mid_mapSubtract_5df18376713b9c4f,
          mid_mapSubtractToSelf_5df18376713b9c4f,
          mid_mapToSelf_ad908208161b523f,
          mid_outerProduct_54d602014b6af984,
          mid_projection_613347e28dd909cd,
          mid_set_17db3a65980d3441,
          mid_setEntry_bb79ca80d85d0a66,
          mid_setSubVector_18388821294f273e,
          mid_sparseIterator_4d23511a9f0db098,
          mid_subtract_613347e28dd909cd,
          mid_toArray_60c7040667a7dc5c,
          mid_unitVector_aab4fbf77867daa8,
          mid_unitize_0fa09c18fee449d5,
          mid_unmodifiableRealVector_613347e28dd909cd,
          mid_walkInDefaultOrder_7fcbb8310174b200,
          mid_walkInDefaultOrder_1dd342028e49eba0,
          mid_walkInDefaultOrder_d74abf24a85ccc3b,
          mid_walkInDefaultOrder_2debe8623b864ef6,
          mid_walkInOptimizedOrder_7fcbb8310174b200,
          mid_walkInOptimizedOrder_1dd342028e49eba0,
          mid_walkInOptimizedOrder_d74abf24a85ccc3b,
          mid_walkInOptimizedOrder_2debe8623b864ef6,
          mid_checkVectorDimensions_bdf205176b90cff1,
          mid_checkVectorDimensions_99803b0791f320ff,
          mid_checkIndices_6f37635c3285dbdf,
          mid_checkIndex_99803b0791f320ff,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVector(const RealVector& obj) : ::java::lang::Object(obj) {}

        RealVector();

        RealVector add(const RealVector &) const;
        void addToEntry(jint, jdouble) const;
        RealVector append(const RealVector &) const;
        RealVector append(jdouble) const;
        RealVector combine(jdouble, jdouble, const RealVector &) const;
        RealVector combineToSelf(jdouble, jdouble, const RealVector &) const;
        RealVector copy() const;
        jdouble cosine(const RealVector &) const;
        jdouble dotProduct(const RealVector &) const;
        RealVector ebeDivide(const RealVector &) const;
        RealVector ebeMultiply(const RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getDimension() const;
        jdouble getDistance(const RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const RealVector &) const;
        jdouble getLInfNorm() const;
        jint getMaxIndex() const;
        jdouble getMaxValue() const;
        jint getMinIndex() const;
        jdouble getMinValue() const;
        jdouble getNorm() const;
        RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ::java::util::Iterator iterator() const;
        RealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        RealVector mapAdd(jdouble) const;
        RealVector mapAddToSelf(jdouble) const;
        RealVector mapDivide(jdouble) const;
        RealVector mapDivideToSelf(jdouble) const;
        RealVector mapMultiply(jdouble) const;
        RealVector mapMultiplyToSelf(jdouble) const;
        RealVector mapSubtract(jdouble) const;
        RealVector mapSubtractToSelf(jdouble) const;
        RealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const RealVector &) const;
        RealVector projection(const RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const RealVector &) const;
        ::java::util::Iterator sparseIterator() const;
        RealVector subtract(const RealVector &) const;
        JArray< jdouble > toArray() const;
        RealVector unitVector() const;
        void unitize() const;
        static RealVector unmodifiableRealVector(const RealVector &);
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVector);
      extern PyTypeObject *PY_TYPE(RealVector);

      class t_RealVector {
      public:
        PyObject_HEAD
        RealVector object;
        static PyObject *wrap_Object(const RealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
