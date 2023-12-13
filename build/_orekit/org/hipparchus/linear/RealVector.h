#ifndef org_hipparchus_linear_RealVector_H
#define org_hipparchus_linear_RealVector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace linear {
      class RealVectorPreservingVisitor;
      class RealVector;
      class RealVector$Entry;
      class RealVectorChangingVisitor;
      class RealMatrix;
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_add_d5f1d017fd25113b,
          mid_addToEntry_d5322b8b512aeb26,
          mid_append_d5f1d017fd25113b,
          mid_append_0af7505d8931441d,
          mid_combine_60c5136b129a75b0,
          mid_combineToSelf_60c5136b129a75b0,
          mid_copy_3a10cc75bd070d84,
          mid_cosine_532b95759e51e831,
          mid_dotProduct_532b95759e51e831,
          mid_ebeDivide_d5f1d017fd25113b,
          mid_ebeMultiply_d5f1d017fd25113b,
          mid_equals_460c5e2d9d51c6cc,
          mid_getDimension_55546ef6a647f39b,
          mid_getDistance_532b95759e51e831,
          mid_getEntry_2afcbc21f4e57ab2,
          mid_getL1Distance_532b95759e51e831,
          mid_getL1Norm_b74f83833fdad017,
          mid_getLInfDistance_532b95759e51e831,
          mid_getLInfNorm_b74f83833fdad017,
          mid_getMaxIndex_55546ef6a647f39b,
          mid_getMaxValue_b74f83833fdad017,
          mid_getMinIndex_55546ef6a647f39b,
          mid_getMinValue_b74f83833fdad017,
          mid_getNorm_b74f83833fdad017,
          mid_getSubVector_71fee5b03bacb96b,
          mid_hashCode_55546ef6a647f39b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_iterator_fc7780bc5d5b73b0,
          mid_map_d81d16e6299b5dc0,
          mid_mapAdd_0af7505d8931441d,
          mid_mapAddToSelf_0af7505d8931441d,
          mid_mapDivide_0af7505d8931441d,
          mid_mapDivideToSelf_0af7505d8931441d,
          mid_mapMultiply_0af7505d8931441d,
          mid_mapMultiplyToSelf_0af7505d8931441d,
          mid_mapSubtract_0af7505d8931441d,
          mid_mapSubtractToSelf_0af7505d8931441d,
          mid_mapToSelf_d81d16e6299b5dc0,
          mid_outerProduct_847a33a82b65c746,
          mid_projection_d5f1d017fd25113b,
          mid_set_8ba9fe7a847cecad,
          mid_setEntry_d5322b8b512aeb26,
          mid_setSubVector_9fe1e9c5bee9d07c,
          mid_sparseIterator_fc7780bc5d5b73b0,
          mid_subtract_d5f1d017fd25113b,
          mid_toArray_25e1757a36c4dde2,
          mid_unitVector_3a10cc75bd070d84,
          mid_unitize_a1fa5dae97ea5ed2,
          mid_unmodifiableRealVector_d5f1d017fd25113b,
          mid_walkInDefaultOrder_3b0a64df0d6d5970,
          mid_walkInDefaultOrder_5765b86ec2dc0005,
          mid_walkInDefaultOrder_e0df9aff405997ab,
          mid_walkInDefaultOrder_dc41fc18b07911cf,
          mid_walkInOptimizedOrder_3b0a64df0d6d5970,
          mid_walkInOptimizedOrder_5765b86ec2dc0005,
          mid_walkInOptimizedOrder_e0df9aff405997ab,
          mid_walkInOptimizedOrder_dc41fc18b07911cf,
          mid_checkVectorDimensions_872f190ac7ffe0f7,
          mid_checkVectorDimensions_44ed599e93e8a30c,
          mid_checkIndices_3313c75e3e16c428,
          mid_checkIndex_44ed599e93e8a30c,
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
