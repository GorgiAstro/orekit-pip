#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphereGenerator::class$ = NULL;
          jmethodID *SphereGenerator::mids$ = NULL;
          bool SphereGenerator::live$ = false;

          jclass SphereGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphereGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_1093dd6e31c1164f] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphereGenerator::SphereGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphereGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_1093dd6e31c1164f], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg);

          static PyMethodDef t_SphereGenerator__methods_[] = {
            DECLARE_METHOD(t_SphereGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphereGenerator)[] = {
            { Py_tp_methods, t_SphereGenerator__methods_ },
            { Py_tp_init, (void *) t_SphereGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphereGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphereGenerator, t_SphereGenerator, SphereGenerator);

          void t_SphereGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(SphereGenerator), &PY_TYPE_DEF(SphereGenerator), module, "SphereGenerator", 0);
          }

          void t_SphereGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "class_", make_descriptor(SphereGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "wrapfn_", make_descriptor(t_SphereGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphereGenerator::initializeClass, 1)))
              return NULL;
            return t_SphereGenerator::wrap_Object(SphereGenerator(((t_SphereGenerator *) arg)->object.this$));
          }
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphereGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds)
          {
            SphereGenerator object((jobject) NULL);

            INT_CALL(object = SphereGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D), ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/HashSet.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Dcb::class$ = NULL;
        jmethodID *Dcb::mids$ = NULL;
        bool Dcb::live$ = false;

        jclass Dcb::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Dcb");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDcbLine_04cccaba0f852d8d] = env->getMethodID(cls, "addDcbLine", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_getAvailableObservationPairs_eecd1cf6328441dd] = env->getMethodID(cls, "getAvailableObservationPairs", "()Ljava/util/HashSet;");
            mids$[mid_getDcb_343280e5d0dc9f9c] = env->getMethodID(cls, "getDcb", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getDcb_8626587a670ef0c2] = env->getMethodID(cls, "getDcb", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMaximumValidDateForObservationPair_7a270440aa82b138] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMaximumValidDateForObservationPair_34d1cd66a625fdb5] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_7a270440aa82b138] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_34d1cd66a625fdb5] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Dcb::Dcb() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void Dcb::addDcbLine(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcbLine_04cccaba0f852d8d], a0.this$, a1.this$, a2.this$, a3.this$, a4);
        }

        ::java::util::HashSet Dcb::getAvailableObservationPairs() const
        {
          return ::java::util::HashSet(env->callObjectMethod(this$, mids$[mid_getAvailableObservationPairs_eecd1cf6328441dd]));
        }

        jdouble Dcb::getDcb(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_343280e5d0dc9f9c], a0.this$, a1.this$, a2.this$);
        }

        jdouble Dcb::getDcb(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_8626587a670ef0c2], a0.this$, a1.this$, a2.this$);
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_7a270440aa82b138], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_34d1cd66a625fdb5], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_7a270440aa82b138], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_34d1cd66a625fdb5], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self);
        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data);
        static PyGetSetDef t_Dcb__fields_[] = {
          DECLARE_GET_FIELD(t_Dcb, availableObservationPairs),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Dcb__methods_[] = {
          DECLARE_METHOD(t_Dcb, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, addDcbLine, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getAvailableObservationPairs, METH_NOARGS),
          DECLARE_METHOD(t_Dcb, getDcb, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMaximumValidDateForObservationPair, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMinimumValidDateForObservationPair, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Dcb)[] = {
          { Py_tp_methods, t_Dcb__methods_ },
          { Py_tp_init, (void *) t_Dcb_init_ },
          { Py_tp_getset, t_Dcb__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Dcb)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Dcb, t_Dcb, Dcb);

        void t_Dcb::install(PyObject *module)
        {
          installType(&PY_TYPE(Dcb), &PY_TYPE_DEF(Dcb), module, "Dcb", 0);
        }

        void t_Dcb::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "class_", make_descriptor(Dcb::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "wrapfn_", make_descriptor(t_Dcb::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Dcb::initializeClass, 1)))
            return NULL;
          return t_Dcb::wrap_Object(Dcb(((t_Dcb *) arg)->object.this$));
        }
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Dcb::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds)
        {
          Dcb object((jobject) NULL);

          INT_CALL(object = Dcb());
          self->object = object;

          return 0;
        }

        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;

          if (!parseArgs(args, "sskkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(self->object.addDcbLine(a0, a1, a2, a3, a4));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcbLine", args);
          return NULL;
        }

        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self)
        {
          ::java::util::HashSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(result);
        }

        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "KKk", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "ssk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDcb", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMaximumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMinimumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data)
        {
          ::java::util::HashSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinhCosh::class$ = NULL;
      jmethodID *FieldSinhCosh::mids$ = NULL;
      bool FieldSinhCosh::live$ = false;

      jclass FieldSinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb233f2d837bf6b7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cosh_541690f9ee81d3ad] = env->getMethodID(cls, "cosh", "()Ljava/lang/Object;");
          mids$[mid_difference_5031b9cee1849dc0] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sinh_541690f9ee81d3ad] = env->getMethodID(cls, "sinh", "()Ljava/lang/Object;");
          mids$[mid_sum_5031b9cee1849dc0] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinhCosh::FieldSinhCosh(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb233f2d837bf6b7, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinhCosh::cosh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cosh_541690f9ee81d3ad]));
      }

      FieldSinhCosh FieldSinhCosh::difference(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_5031b9cee1849dc0], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinhCosh::sinh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sinh_541690f9ee81d3ad]));
      }

      FieldSinhCosh FieldSinhCosh::sum(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_5031b9cee1849dc0], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args);
      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data);
      static PyGetSetDef t_FieldSinhCosh__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinhCosh, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinhCosh__methods_[] = {
        DECLARE_METHOD(t_FieldSinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinhCosh)[] = {
        { Py_tp_methods, t_FieldSinhCosh__methods_ },
        { Py_tp_init, (void *) t_FieldSinhCosh_init_ },
        { Py_tp_getset, t_FieldSinhCosh__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinhCosh, t_FieldSinhCosh, FieldSinhCosh);
      PyObject *t_FieldSinhCosh::wrap_Object(const FieldSinhCosh& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinhCosh::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinhCosh), &PY_TYPE_DEF(FieldSinhCosh), module, "FieldSinhCosh", 0);
      }

      void t_FieldSinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "class_", make_descriptor(FieldSinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "wrapfn_", make_descriptor(t_FieldSinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinhCosh::initializeClass, 1)))
          return NULL;
        return t_FieldSinhCosh::wrap_Object(FieldSinhCosh(((t_FieldSinhCosh *) arg)->object.this$));
      }
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinhCosh object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinhCosh(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::difference(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::sum(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *Rugged::class$ = NULL;
        jmethodID *Rugged::mids$ = NULL;
        bool Rugged::live$ = false;

        jclass Rugged::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/Rugged");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dateLocation_cb79a54660e78b3c] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_dateLocation_22120ae0407ca8cb] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;DDII)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_directLocation_61df8abbfc58115b] = env->getMethodID(cls, "directLocation", "(Ljava/lang/String;D)[Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_directLocation_084fceafe328d082] = env->getMethodID(cls, "directLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_distanceBetweenLOS_42ebea2f799979f3] = env->getMethodID(cls, "distanceBetweenLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;D)[D");
            mids$[mid_distanceBetweenLOSderivatives_c8e3e81530539894] = env->getMethodID(cls, "distanceBetweenLOSderivatives", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getAlgorithm_81f0b03daeff021f] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/intersection/IntersectionAlgorithm;");
            mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getBodyToInertial_976d4bc81671ce42] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getEllipsoid_dd5ed0ce6aa0aa1f] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialToBody_976d4bc81671ce42] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getLineSensor_4377f7d741e3b8b8] = env->getMethodID(cls, "getLineSensor", "(Ljava/lang/String;)Lorg/orekit/rugged/linesensor/LineSensor;");
            mids$[mid_getLineSensors_cb666ea1a15f5210] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/Collection;");
            mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getRefractionCorrection_8900d038872ca946] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getScToBody_cf686ec38ae38bec] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getScToInertial_976d4bc81671ce42] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_inverseLocation_65ac31aa9f2ff8e2] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocation_de019a270691f75a] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;DDII)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocationDerivatives_4395b3d88792732c] = env->getMethodID(cls, "inverseLocationDerivatives", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;IILorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_isAberrationOfLightCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isAberrationOfLightCorrected", "()Z");
            mids$[mid_isInRange_a35647bda2901f54] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");
            mids$[mid_isLightTimeCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isLightTimeCorrected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_cb79a54660e78b3c], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_22120ae0407ca8cb], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::orekit::bodies::GeodeticPoint > Rugged::directLocation(const ::java::lang::String & a0, jdouble a1) const
        {
          return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_directLocation_61df8abbfc58115b], a0.this$, a1));
        }

        ::org::orekit::bodies::GeodeticPoint Rugged::directLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_directLocation_084fceafe328d082], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > Rugged::distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOS_42ebea2f799979f3], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6, const ::org::orekit::rugged::utils::DerivativeGenerator & a7) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOSderivatives_c8e3e81530539894], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6, a7.this$));
        }

        ::org::orekit::rugged::intersection::IntersectionAlgorithm Rugged::getAlgorithm() const
        {
          return ::org::orekit::rugged::intersection::IntersectionAlgorithm(env->callObjectMethod(this$, mids$[mid_getAlgorithm_81f0b03daeff021f]));
        }

        ::org::orekit::rugged::api::AlgorithmId Rugged::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
        }

        ::org::orekit::frames::Transform Rugged::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid Rugged::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_dd5ed0ce6aa0aa1f]));
        }

        ::org::orekit::frames::Transform Rugged::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::rugged::linesensor::LineSensor Rugged::getLineSensor(const ::java::lang::String & a0) const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getLineSensor_4377f7d741e3b8b8], a0.this$));
        }

        ::java::util::Collection Rugged::getLineSensors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getLineSensors_cb666ea1a15f5210]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
        }

        ::java::lang::String Rugged::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction Rugged::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8900d038872ca946]));
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody Rugged::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_cf686ec38ae38bec]));
        }

        ::org::orekit::frames::Transform Rugged::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_976d4bc81671ce42], a0.this$));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_65ac31aa9f2ff8e2], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_de019a270691f75a], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::inverseLocationDerivatives(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3, const ::org::orekit::rugged::utils::DerivativeGenerator & a4) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_inverseLocationDerivatives_4395b3d88792732c], a0.this$, a1.this$, a2, a3, a4.this$));
        }

        jboolean Rugged::isAberrationOfLightCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAberrationOfLightCorrected_9ab94ac1dc23b105]);
        }

        jboolean Rugged::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_a35647bda2901f54], a0.this$);
        }

        jboolean Rugged::isLightTimeCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLightTimeCorrected_9ab94ac1dc23b105]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self);
        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self);
        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self);
        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensors(t_Rugged *self);
        static PyObject *t_Rugged_getMaxDate(t_Rugged *self);
        static PyObject *t_Rugged_getMinDate(t_Rugged *self);
        static PyObject *t_Rugged_getName(t_Rugged *self);
        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self);
        static PyObject *t_Rugged_getScToBody(t_Rugged *self);
        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self);
        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self);
        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data);
        static PyGetSetDef t_Rugged__fields_[] = {
          DECLARE_GET_FIELD(t_Rugged, aberrationOfLightCorrected),
          DECLARE_GET_FIELD(t_Rugged, algorithm),
          DECLARE_GET_FIELD(t_Rugged, algorithmId),
          DECLARE_GET_FIELD(t_Rugged, ellipsoid),
          DECLARE_GET_FIELD(t_Rugged, lightTimeCorrected),
          DECLARE_GET_FIELD(t_Rugged, lineSensors),
          DECLARE_GET_FIELD(t_Rugged, maxDate),
          DECLARE_GET_FIELD(t_Rugged, minDate),
          DECLARE_GET_FIELD(t_Rugged, name),
          DECLARE_GET_FIELD(t_Rugged, refractionCorrection),
          DECLARE_GET_FIELD(t_Rugged, scToBody),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Rugged__methods_[] = {
          DECLARE_METHOD(t_Rugged, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, dateLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, directLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOS, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOSderivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getInertialToBody, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensor, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getName, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, inverseLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, inverseLocationDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, isAberrationOfLightCorrected, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, isInRange, METH_O),
          DECLARE_METHOD(t_Rugged, isLightTimeCorrected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rugged)[] = {
          { Py_tp_methods, t_Rugged__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Rugged__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rugged)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rugged, t_Rugged, Rugged);

        void t_Rugged::install(PyObject *module)
        {
          installType(&PY_TYPE(Rugged), &PY_TYPE_DEF(Rugged), module, "Rugged", 0);
        }

        void t_Rugged::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "class_", make_descriptor(Rugged::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "wrapfn_", make_descriptor(t_Rugged::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rugged::initializeClass, 1)))
            return NULL;
          return t_Rugged::wrap_Object(Rugged(((t_Rugged *) arg)->object.this$));
        }
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rugged::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dateLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);

              if (!parseArgs(args, "sD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "directLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOS(a0, a1, a2, a3, a4, a5, a6));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOS", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          ::org::orekit::rugged::utils::DerivativeGenerator a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkDK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOSderivatives(a0, a1, a2, a3, a4, a5, a6, a7));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOSderivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(result);
        }

        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getLineSensor(a0));
            return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLineSensor", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensors(t_Rugged *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_Rugged_getMaxDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getMinDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getName(t_Rugged *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToBody(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::DerivativeGenerator a4((jobject) NULL);
          PyTypeObject **p4;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "skIIK", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.inverseLocationDerivatives(a0, a1, a2, a3, a4));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocationDerivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NtripClient::class$ = NULL;
          jmethodID *NtripClient::mids$ = NULL;
          bool NtripClient::live$ = false;
          jint NtripClient::DEFAULT_MAX_RECONNECT = (jint) 0;
          jint NtripClient::DEFAULT_PORT = (jint) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY = (jdouble) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR = (jdouble) 0;
          jint NtripClient::DEFAULT_TIMEOUT = (jint) 0;

          jclass NtripClient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NtripClient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02c6e5855745e0e2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
              mids$[mid_addObserver_69de4858924803c0] = env->getMethodID(cls, "addObserver", "(ILjava/lang/String;Lorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_checkException_a1fa5dae97ea5ed2] = env->getMethodID(cls, "checkException", "()V");
              mids$[mid_getHost_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
              mids$[mid_getPort_55546ef6a647f39b] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getSourceTable_53fc9c4acee8b189] = env->getMethodID(cls, "getSourceTable", "()Lorg/orekit/gnss/metric/ntrip/SourceTable;");
              mids$[mid_setFix_bdda379340ba5018] = env->getMethodID(cls, "setFix", "(IIDDDDD)V");
              mids$[mid_setReconnectParameters_2aa803b9073e6a76] = env->getMethodID(cls, "setReconnectParameters", "(DDI)V");
              mids$[mid_setTimeout_44ed599e93e8a30c] = env->getMethodID(cls, "setTimeout", "(I)V");
              mids$[mid_startStreaming_e512c14c09c16a66] = env->getMethodID(cls, "startStreaming", "(Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZ)V");
              mids$[mid_stopStreaming_44ed599e93e8a30c] = env->getMethodID(cls, "stopStreaming", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_MAX_RECONNECT = env->getStaticIntField(cls, "DEFAULT_MAX_RECONNECT");
              DEFAULT_PORT = env->getStaticIntField(cls, "DEFAULT_PORT");
              DEFAULT_RECONNECT_DELAY = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY");
              DEFAULT_RECONNECT_DELAY_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY_FACTOR");
              DEFAULT_TIMEOUT = env->getStaticIntField(cls, "DEFAULT_TIMEOUT");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NtripClient::NtripClient(const ::java::lang::String & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02c6e5855745e0e2, a0.this$, a1)) {}

          void NtripClient::addObserver(jint a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_69de4858924803c0], a0, a1.this$, a2.this$);
          }

          void NtripClient::checkException() const
          {
            env->callVoidMethod(this$, mids$[mid_checkException_a1fa5dae97ea5ed2]);
          }

          ::java::lang::String NtripClient::getHost() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_1c1fa1e935d6cdcf]));
          }

          jint NtripClient::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_55546ef6a647f39b]);
          }

          ::org::orekit::gnss::metric::ntrip::SourceTable NtripClient::getSourceTable() const
          {
            return ::org::orekit::gnss::metric::ntrip::SourceTable(env->callObjectMethod(this$, mids$[mid_getSourceTable_53fc9c4acee8b189]));
          }

          void NtripClient::setFix(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) const
          {
            env->callVoidMethod(this$, mids$[mid_setFix_bdda379340ba5018], a0, a1, a2, a3, a4, a5, a6);
          }

          void NtripClient::setReconnectParameters(jdouble a0, jdouble a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setReconnectParameters_2aa803b9073e6a76], a0, a1, a2);
          }

          void NtripClient::setTimeout(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeout_44ed599e93e8a30c], a0);
          }

          void NtripClient::startStreaming(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::ntrip::Type & a1, jboolean a2, jboolean a3) const
          {
            env->callVoidMethod(this$, mids$[mid_startStreaming_e512c14c09c16a66], a0.this$, a1.this$, a2, a3);
          }

          void NtripClient::stopStreaming(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_stopStreaming_44ed599e93e8a30c], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_checkException(t_NtripClient *self);
          static PyObject *t_NtripClient_getHost(t_NtripClient *self);
          static PyObject *t_NtripClient_getPort(t_NtripClient *self);
          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self);
          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data);
          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data);
          static PyGetSetDef t_NtripClient__fields_[] = {
            DECLARE_GET_FIELD(t_NtripClient, host),
            DECLARE_GET_FIELD(t_NtripClient, port),
            DECLARE_GET_FIELD(t_NtripClient, sourceTable),
            DECLARE_SET_FIELD(t_NtripClient, timeout),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NtripClient__methods_[] = {
            DECLARE_METHOD(t_NtripClient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, checkException, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getHost, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getPort, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getSourceTable, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, setFix, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setReconnectParameters, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setTimeout, METH_O),
            DECLARE_METHOD(t_NtripClient, startStreaming, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, stopStreaming, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NtripClient)[] = {
            { Py_tp_methods, t_NtripClient__methods_ },
            { Py_tp_init, (void *) t_NtripClient_init_ },
            { Py_tp_getset, t_NtripClient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NtripClient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NtripClient, t_NtripClient, NtripClient);

          void t_NtripClient::install(PyObject *module)
          {
            installType(&PY_TYPE(NtripClient), &PY_TYPE_DEF(NtripClient), module, "NtripClient", 0);
          }

          void t_NtripClient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "class_", make_descriptor(NtripClient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "wrapfn_", make_descriptor(t_NtripClient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "boxfn_", make_descriptor(boxObject));
            env->getClass(NtripClient::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_MAX_RECONNECT", make_descriptor(NtripClient::DEFAULT_MAX_RECONNECT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_PORT", make_descriptor(NtripClient::DEFAULT_PORT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY_FACTOR", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_TIMEOUT", make_descriptor(NtripClient::DEFAULT_TIMEOUT));
          }

          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NtripClient::initializeClass, 1)))
              return NULL;
            return t_NtripClient::wrap_Object(NtripClient(((t_NtripClient *) arg)->object.this$));
          }
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NtripClient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            NtripClient object((jobject) NULL);

            if (!parseArgs(args, "sI", &a0, &a1))
            {
              INT_CALL(object = NtripClient(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::MessageObserver a2((jobject) NULL);

            if (!parseArgs(args, "Isk", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addObserver(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_NtripClient_checkException(t_NtripClient *self)
          {
            OBJ_CALL(self->object.checkException());
            Py_RETURN_NONE;
          }

          static PyObject *t_NtripClient_getHost(t_NtripClient *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHost());
            return j2p(result);
          }

          static PyObject *t_NtripClient_getPort(t_NtripClient *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(result);
          }

          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;

            if (!parseArgs(args, "IIDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(self->object.setFix(a0, a1, a2, a3, a4, a5, a6));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFix", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jint a2;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.setReconnectParameters(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReconnectParameters", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setTimeout(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;

            if (!parseArgs(args, "sKZZ", ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.startStreaming(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "startStreaming", args);
            return NULL;
          }

          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.stopStreaming(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "stopStreaming", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHost());
            return j2p(value);
          }

          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(value);
          }

          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setTimeout(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeout", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmDataField::class$ = NULL;
          jmethodID *RtcmDataField::mids$ = NULL;
          bool RtcmDataField::live$ = false;
          RtcmDataField *RtcmDataField::DF002 = NULL;
          RtcmDataField *RtcmDataField::DF009 = NULL;
          RtcmDataField *RtcmDataField::DF038 = NULL;
          RtcmDataField *RtcmDataField::DF040 = NULL;
          RtcmDataField *RtcmDataField::DF068 = NULL;
          RtcmDataField *RtcmDataField::DF071 = NULL;
          RtcmDataField *RtcmDataField::DF076 = NULL;
          RtcmDataField *RtcmDataField::DF077 = NULL;
          RtcmDataField *RtcmDataField::DF078 = NULL;
          RtcmDataField *RtcmDataField::DF079 = NULL;
          RtcmDataField *RtcmDataField::DF081 = NULL;
          RtcmDataField *RtcmDataField::DF082 = NULL;
          RtcmDataField *RtcmDataField::DF083 = NULL;
          RtcmDataField *RtcmDataField::DF084 = NULL;
          RtcmDataField *RtcmDataField::DF085 = NULL;
          RtcmDataField *RtcmDataField::DF086 = NULL;
          RtcmDataField *RtcmDataField::DF087 = NULL;
          RtcmDataField *RtcmDataField::DF088 = NULL;
          RtcmDataField *RtcmDataField::DF089 = NULL;
          RtcmDataField *RtcmDataField::DF090 = NULL;
          RtcmDataField *RtcmDataField::DF091 = NULL;
          RtcmDataField *RtcmDataField::DF092 = NULL;
          RtcmDataField *RtcmDataField::DF093 = NULL;
          RtcmDataField *RtcmDataField::DF094 = NULL;
          RtcmDataField *RtcmDataField::DF095 = NULL;
          RtcmDataField *RtcmDataField::DF096 = NULL;
          RtcmDataField *RtcmDataField::DF097 = NULL;
          RtcmDataField *RtcmDataField::DF098 = NULL;
          RtcmDataField *RtcmDataField::DF099 = NULL;
          RtcmDataField *RtcmDataField::DF100 = NULL;
          RtcmDataField *RtcmDataField::DF101 = NULL;
          RtcmDataField *RtcmDataField::DF102 = NULL;
          RtcmDataField *RtcmDataField::DF103 = NULL;
          RtcmDataField *RtcmDataField::DF104 = NULL;
          RtcmDataField *RtcmDataField::DF105 = NULL;
          RtcmDataField *RtcmDataField::DF106 = NULL;
          RtcmDataField *RtcmDataField::DF107 = NULL;
          RtcmDataField *RtcmDataField::DF108 = NULL;
          RtcmDataField *RtcmDataField::DF109 = NULL;
          RtcmDataField *RtcmDataField::DF110 = NULL;
          RtcmDataField *RtcmDataField::DF111 = NULL;
          RtcmDataField *RtcmDataField::DF112 = NULL;
          RtcmDataField *RtcmDataField::DF113 = NULL;
          RtcmDataField *RtcmDataField::DF114 = NULL;
          RtcmDataField *RtcmDataField::DF115 = NULL;
          RtcmDataField *RtcmDataField::DF116 = NULL;
          RtcmDataField *RtcmDataField::DF117 = NULL;
          RtcmDataField *RtcmDataField::DF118 = NULL;
          RtcmDataField *RtcmDataField::DF119 = NULL;
          RtcmDataField *RtcmDataField::DF120 = NULL;
          RtcmDataField *RtcmDataField::DF121 = NULL;
          RtcmDataField *RtcmDataField::DF122 = NULL;
          RtcmDataField *RtcmDataField::DF123 = NULL;
          RtcmDataField *RtcmDataField::DF124 = NULL;
          RtcmDataField *RtcmDataField::DF125 = NULL;
          RtcmDataField *RtcmDataField::DF126 = NULL;
          RtcmDataField *RtcmDataField::DF127 = NULL;
          RtcmDataField *RtcmDataField::DF128 = NULL;
          RtcmDataField *RtcmDataField::DF129 = NULL;
          RtcmDataField *RtcmDataField::DF130 = NULL;
          RtcmDataField *RtcmDataField::DF131 = NULL;
          RtcmDataField *RtcmDataField::DF132 = NULL;
          RtcmDataField *RtcmDataField::DF133 = NULL;
          RtcmDataField *RtcmDataField::DF134 = NULL;
          RtcmDataField *RtcmDataField::DF135 = NULL;
          RtcmDataField *RtcmDataField::DF136 = NULL;
          RtcmDataField *RtcmDataField::DF137 = NULL;
          RtcmDataField *RtcmDataField::DF252 = NULL;
          RtcmDataField *RtcmDataField::DF289 = NULL;
          RtcmDataField *RtcmDataField::DF290 = NULL;
          RtcmDataField *RtcmDataField::DF291 = NULL;
          RtcmDataField *RtcmDataField::DF292 = NULL;
          RtcmDataField *RtcmDataField::DF293 = NULL;
          RtcmDataField *RtcmDataField::DF294 = NULL;
          RtcmDataField *RtcmDataField::DF295 = NULL;
          RtcmDataField *RtcmDataField::DF296 = NULL;
          RtcmDataField *RtcmDataField::DF297 = NULL;
          RtcmDataField *RtcmDataField::DF298 = NULL;
          RtcmDataField *RtcmDataField::DF299 = NULL;
          RtcmDataField *RtcmDataField::DF300 = NULL;
          RtcmDataField *RtcmDataField::DF301 = NULL;
          RtcmDataField *RtcmDataField::DF302 = NULL;
          RtcmDataField *RtcmDataField::DF303 = NULL;
          RtcmDataField *RtcmDataField::DF304 = NULL;
          RtcmDataField *RtcmDataField::DF305 = NULL;
          RtcmDataField *RtcmDataField::DF306 = NULL;
          RtcmDataField *RtcmDataField::DF307 = NULL;
          RtcmDataField *RtcmDataField::DF308 = NULL;
          RtcmDataField *RtcmDataField::DF309 = NULL;
          RtcmDataField *RtcmDataField::DF310 = NULL;
          RtcmDataField *RtcmDataField::DF311 = NULL;
          RtcmDataField *RtcmDataField::DF312 = NULL;
          RtcmDataField *RtcmDataField::DF313 = NULL;
          RtcmDataField *RtcmDataField::DF314 = NULL;
          RtcmDataField *RtcmDataField::DF315 = NULL;
          RtcmDataField *RtcmDataField::DF316 = NULL;
          RtcmDataField *RtcmDataField::DF317 = NULL;
          RtcmDataField *RtcmDataField::DF365 = NULL;
          RtcmDataField *RtcmDataField::DF366 = NULL;
          RtcmDataField *RtcmDataField::DF367 = NULL;
          RtcmDataField *RtcmDataField::DF368 = NULL;
          RtcmDataField *RtcmDataField::DF369 = NULL;
          RtcmDataField *RtcmDataField::DF370 = NULL;
          RtcmDataField *RtcmDataField::DF375 = NULL;
          RtcmDataField *RtcmDataField::DF376 = NULL;
          RtcmDataField *RtcmDataField::DF377 = NULL;
          RtcmDataField *RtcmDataField::DF378 = NULL;
          RtcmDataField *RtcmDataField::DF384 = NULL;
          RtcmDataField *RtcmDataField::DF385 = NULL;
          RtcmDataField *RtcmDataField::DF386 = NULL;
          RtcmDataField *RtcmDataField::DF387 = NULL;
          RtcmDataField *RtcmDataField::DF388 = NULL;
          RtcmDataField *RtcmDataField::DF391 = NULL;
          RtcmDataField *RtcmDataField::DF392 = NULL;
          RtcmDataField *RtcmDataField::DF413 = NULL;
          RtcmDataField *RtcmDataField::DF414 = NULL;
          RtcmDataField *RtcmDataField::DF415 = NULL;
          RtcmDataField *RtcmDataField::DF429 = NULL;
          RtcmDataField *RtcmDataField::DF430 = NULL;
          RtcmDataField *RtcmDataField::DF431 = NULL;
          RtcmDataField *RtcmDataField::DF432 = NULL;
          RtcmDataField *RtcmDataField::DF433 = NULL;
          RtcmDataField *RtcmDataField::DF434 = NULL;
          RtcmDataField *RtcmDataField::DF435 = NULL;
          RtcmDataField *RtcmDataField::DF436 = NULL;
          RtcmDataField *RtcmDataField::DF437 = NULL;
          RtcmDataField *RtcmDataField::DF438 = NULL;
          RtcmDataField *RtcmDataField::DF439 = NULL;
          RtcmDataField *RtcmDataField::DF440 = NULL;
          RtcmDataField *RtcmDataField::DF441 = NULL;
          RtcmDataField *RtcmDataField::DF442 = NULL;
          RtcmDataField *RtcmDataField::DF443 = NULL;
          RtcmDataField *RtcmDataField::DF444 = NULL;
          RtcmDataField *RtcmDataField::DF445 = NULL;
          RtcmDataField *RtcmDataField::DF446 = NULL;
          RtcmDataField *RtcmDataField::DF447 = NULL;
          RtcmDataField *RtcmDataField::DF448 = NULL;
          RtcmDataField *RtcmDataField::DF449 = NULL;
          RtcmDataField *RtcmDataField::DF450 = NULL;
          RtcmDataField *RtcmDataField::DF451 = NULL;
          RtcmDataField *RtcmDataField::DF452 = NULL;
          RtcmDataField *RtcmDataField::DF453 = NULL;
          RtcmDataField *RtcmDataField::DF454 = NULL;
          RtcmDataField *RtcmDataField::DF455 = NULL;
          RtcmDataField *RtcmDataField::DF456 = NULL;
          RtcmDataField *RtcmDataField::DF457 = NULL;
          RtcmDataField *RtcmDataField::DF458 = NULL;
          RtcmDataField *RtcmDataField::DF488 = NULL;
          RtcmDataField *RtcmDataField::DF489 = NULL;
          RtcmDataField *RtcmDataField::DF490 = NULL;
          RtcmDataField *RtcmDataField::DF491 = NULL;
          RtcmDataField *RtcmDataField::DF492 = NULL;
          RtcmDataField *RtcmDataField::DF493 = NULL;
          RtcmDataField *RtcmDataField::DF494 = NULL;
          RtcmDataField *RtcmDataField::DF495 = NULL;
          RtcmDataField *RtcmDataField::DF496 = NULL;
          RtcmDataField *RtcmDataField::DF497 = NULL;
          RtcmDataField *RtcmDataField::DF498 = NULL;
          RtcmDataField *RtcmDataField::DF499 = NULL;
          RtcmDataField *RtcmDataField::DF500 = NULL;
          RtcmDataField *RtcmDataField::DF501 = NULL;
          RtcmDataField *RtcmDataField::DF502 = NULL;
          RtcmDataField *RtcmDataField::DF503 = NULL;
          RtcmDataField *RtcmDataField::DF504 = NULL;
          RtcmDataField *RtcmDataField::DF505 = NULL;
          RtcmDataField *RtcmDataField::DF506 = NULL;
          RtcmDataField *RtcmDataField::DF507 = NULL;
          RtcmDataField *RtcmDataField::DF508 = NULL;
          RtcmDataField *RtcmDataField::DF509 = NULL;
          RtcmDataField *RtcmDataField::DF510 = NULL;
          RtcmDataField *RtcmDataField::DF511 = NULL;
          RtcmDataField *RtcmDataField::DF512 = NULL;
          RtcmDataField *RtcmDataField::DF513 = NULL;
          RtcmDataField *RtcmDataField::DF514 = NULL;
          RtcmDataField *RtcmDataField::DF515 = NULL;

          jclass RtcmDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_a85154f3de9bc0e0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmDataField;");
              mids$[mid_values_e41c0221a6cedd63] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DF002 = new RtcmDataField(env->getStaticObjectField(cls, "DF002", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF009 = new RtcmDataField(env->getStaticObjectField(cls, "DF009", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF038 = new RtcmDataField(env->getStaticObjectField(cls, "DF038", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF040 = new RtcmDataField(env->getStaticObjectField(cls, "DF040", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF068 = new RtcmDataField(env->getStaticObjectField(cls, "DF068", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF071 = new RtcmDataField(env->getStaticObjectField(cls, "DF071", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF076 = new RtcmDataField(env->getStaticObjectField(cls, "DF076", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF077 = new RtcmDataField(env->getStaticObjectField(cls, "DF077", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF078 = new RtcmDataField(env->getStaticObjectField(cls, "DF078", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF079 = new RtcmDataField(env->getStaticObjectField(cls, "DF079", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF081 = new RtcmDataField(env->getStaticObjectField(cls, "DF081", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF082 = new RtcmDataField(env->getStaticObjectField(cls, "DF082", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF083 = new RtcmDataField(env->getStaticObjectField(cls, "DF083", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF084 = new RtcmDataField(env->getStaticObjectField(cls, "DF084", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF085 = new RtcmDataField(env->getStaticObjectField(cls, "DF085", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF086 = new RtcmDataField(env->getStaticObjectField(cls, "DF086", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF087 = new RtcmDataField(env->getStaticObjectField(cls, "DF087", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF088 = new RtcmDataField(env->getStaticObjectField(cls, "DF088", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF089 = new RtcmDataField(env->getStaticObjectField(cls, "DF089", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF090 = new RtcmDataField(env->getStaticObjectField(cls, "DF090", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF091 = new RtcmDataField(env->getStaticObjectField(cls, "DF091", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF092 = new RtcmDataField(env->getStaticObjectField(cls, "DF092", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF093 = new RtcmDataField(env->getStaticObjectField(cls, "DF093", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF094 = new RtcmDataField(env->getStaticObjectField(cls, "DF094", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF095 = new RtcmDataField(env->getStaticObjectField(cls, "DF095", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF096 = new RtcmDataField(env->getStaticObjectField(cls, "DF096", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF097 = new RtcmDataField(env->getStaticObjectField(cls, "DF097", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF098 = new RtcmDataField(env->getStaticObjectField(cls, "DF098", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF099 = new RtcmDataField(env->getStaticObjectField(cls, "DF099", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF100 = new RtcmDataField(env->getStaticObjectField(cls, "DF100", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF101 = new RtcmDataField(env->getStaticObjectField(cls, "DF101", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF102 = new RtcmDataField(env->getStaticObjectField(cls, "DF102", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF103 = new RtcmDataField(env->getStaticObjectField(cls, "DF103", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF104 = new RtcmDataField(env->getStaticObjectField(cls, "DF104", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF105 = new RtcmDataField(env->getStaticObjectField(cls, "DF105", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF106 = new RtcmDataField(env->getStaticObjectField(cls, "DF106", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF107 = new RtcmDataField(env->getStaticObjectField(cls, "DF107", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF108 = new RtcmDataField(env->getStaticObjectField(cls, "DF108", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF109 = new RtcmDataField(env->getStaticObjectField(cls, "DF109", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF110 = new RtcmDataField(env->getStaticObjectField(cls, "DF110", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF111 = new RtcmDataField(env->getStaticObjectField(cls, "DF111", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF112 = new RtcmDataField(env->getStaticObjectField(cls, "DF112", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF113 = new RtcmDataField(env->getStaticObjectField(cls, "DF113", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF114 = new RtcmDataField(env->getStaticObjectField(cls, "DF114", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF115 = new RtcmDataField(env->getStaticObjectField(cls, "DF115", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF116 = new RtcmDataField(env->getStaticObjectField(cls, "DF116", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF117 = new RtcmDataField(env->getStaticObjectField(cls, "DF117", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF118 = new RtcmDataField(env->getStaticObjectField(cls, "DF118", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF119 = new RtcmDataField(env->getStaticObjectField(cls, "DF119", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF120 = new RtcmDataField(env->getStaticObjectField(cls, "DF120", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF121 = new RtcmDataField(env->getStaticObjectField(cls, "DF121", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF122 = new RtcmDataField(env->getStaticObjectField(cls, "DF122", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF123 = new RtcmDataField(env->getStaticObjectField(cls, "DF123", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF124 = new RtcmDataField(env->getStaticObjectField(cls, "DF124", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF125 = new RtcmDataField(env->getStaticObjectField(cls, "DF125", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF126 = new RtcmDataField(env->getStaticObjectField(cls, "DF126", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF127 = new RtcmDataField(env->getStaticObjectField(cls, "DF127", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF128 = new RtcmDataField(env->getStaticObjectField(cls, "DF128", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF129 = new RtcmDataField(env->getStaticObjectField(cls, "DF129", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF130 = new RtcmDataField(env->getStaticObjectField(cls, "DF130", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF131 = new RtcmDataField(env->getStaticObjectField(cls, "DF131", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF132 = new RtcmDataField(env->getStaticObjectField(cls, "DF132", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF133 = new RtcmDataField(env->getStaticObjectField(cls, "DF133", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF134 = new RtcmDataField(env->getStaticObjectField(cls, "DF134", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF135 = new RtcmDataField(env->getStaticObjectField(cls, "DF135", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF136 = new RtcmDataField(env->getStaticObjectField(cls, "DF136", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF137 = new RtcmDataField(env->getStaticObjectField(cls, "DF137", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF252 = new RtcmDataField(env->getStaticObjectField(cls, "DF252", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF289 = new RtcmDataField(env->getStaticObjectField(cls, "DF289", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF290 = new RtcmDataField(env->getStaticObjectField(cls, "DF290", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF291 = new RtcmDataField(env->getStaticObjectField(cls, "DF291", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF292 = new RtcmDataField(env->getStaticObjectField(cls, "DF292", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF293 = new RtcmDataField(env->getStaticObjectField(cls, "DF293", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF294 = new RtcmDataField(env->getStaticObjectField(cls, "DF294", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF295 = new RtcmDataField(env->getStaticObjectField(cls, "DF295", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF296 = new RtcmDataField(env->getStaticObjectField(cls, "DF296", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF297 = new RtcmDataField(env->getStaticObjectField(cls, "DF297", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF298 = new RtcmDataField(env->getStaticObjectField(cls, "DF298", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF299 = new RtcmDataField(env->getStaticObjectField(cls, "DF299", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF300 = new RtcmDataField(env->getStaticObjectField(cls, "DF300", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF301 = new RtcmDataField(env->getStaticObjectField(cls, "DF301", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF302 = new RtcmDataField(env->getStaticObjectField(cls, "DF302", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF303 = new RtcmDataField(env->getStaticObjectField(cls, "DF303", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF304 = new RtcmDataField(env->getStaticObjectField(cls, "DF304", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF305 = new RtcmDataField(env->getStaticObjectField(cls, "DF305", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF306 = new RtcmDataField(env->getStaticObjectField(cls, "DF306", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF307 = new RtcmDataField(env->getStaticObjectField(cls, "DF307", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF308 = new RtcmDataField(env->getStaticObjectField(cls, "DF308", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF309 = new RtcmDataField(env->getStaticObjectField(cls, "DF309", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF310 = new RtcmDataField(env->getStaticObjectField(cls, "DF310", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF311 = new RtcmDataField(env->getStaticObjectField(cls, "DF311", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF312 = new RtcmDataField(env->getStaticObjectField(cls, "DF312", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF313 = new RtcmDataField(env->getStaticObjectField(cls, "DF313", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF314 = new RtcmDataField(env->getStaticObjectField(cls, "DF314", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF315 = new RtcmDataField(env->getStaticObjectField(cls, "DF315", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF316 = new RtcmDataField(env->getStaticObjectField(cls, "DF316", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF317 = new RtcmDataField(env->getStaticObjectField(cls, "DF317", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF365 = new RtcmDataField(env->getStaticObjectField(cls, "DF365", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF366 = new RtcmDataField(env->getStaticObjectField(cls, "DF366", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF367 = new RtcmDataField(env->getStaticObjectField(cls, "DF367", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF368 = new RtcmDataField(env->getStaticObjectField(cls, "DF368", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF369 = new RtcmDataField(env->getStaticObjectField(cls, "DF369", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF370 = new RtcmDataField(env->getStaticObjectField(cls, "DF370", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF375 = new RtcmDataField(env->getStaticObjectField(cls, "DF375", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF376 = new RtcmDataField(env->getStaticObjectField(cls, "DF376", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF377 = new RtcmDataField(env->getStaticObjectField(cls, "DF377", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF378 = new RtcmDataField(env->getStaticObjectField(cls, "DF378", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF384 = new RtcmDataField(env->getStaticObjectField(cls, "DF384", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF385 = new RtcmDataField(env->getStaticObjectField(cls, "DF385", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF386 = new RtcmDataField(env->getStaticObjectField(cls, "DF386", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF387 = new RtcmDataField(env->getStaticObjectField(cls, "DF387", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF388 = new RtcmDataField(env->getStaticObjectField(cls, "DF388", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF391 = new RtcmDataField(env->getStaticObjectField(cls, "DF391", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF392 = new RtcmDataField(env->getStaticObjectField(cls, "DF392", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF413 = new RtcmDataField(env->getStaticObjectField(cls, "DF413", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF414 = new RtcmDataField(env->getStaticObjectField(cls, "DF414", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF415 = new RtcmDataField(env->getStaticObjectField(cls, "DF415", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF429 = new RtcmDataField(env->getStaticObjectField(cls, "DF429", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF430 = new RtcmDataField(env->getStaticObjectField(cls, "DF430", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF431 = new RtcmDataField(env->getStaticObjectField(cls, "DF431", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF432 = new RtcmDataField(env->getStaticObjectField(cls, "DF432", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF433 = new RtcmDataField(env->getStaticObjectField(cls, "DF433", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF434 = new RtcmDataField(env->getStaticObjectField(cls, "DF434", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF435 = new RtcmDataField(env->getStaticObjectField(cls, "DF435", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF436 = new RtcmDataField(env->getStaticObjectField(cls, "DF436", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF437 = new RtcmDataField(env->getStaticObjectField(cls, "DF437", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF438 = new RtcmDataField(env->getStaticObjectField(cls, "DF438", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF439 = new RtcmDataField(env->getStaticObjectField(cls, "DF439", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF440 = new RtcmDataField(env->getStaticObjectField(cls, "DF440", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF441 = new RtcmDataField(env->getStaticObjectField(cls, "DF441", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF442 = new RtcmDataField(env->getStaticObjectField(cls, "DF442", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF443 = new RtcmDataField(env->getStaticObjectField(cls, "DF443", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF444 = new RtcmDataField(env->getStaticObjectField(cls, "DF444", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF445 = new RtcmDataField(env->getStaticObjectField(cls, "DF445", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF446 = new RtcmDataField(env->getStaticObjectField(cls, "DF446", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF447 = new RtcmDataField(env->getStaticObjectField(cls, "DF447", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF448 = new RtcmDataField(env->getStaticObjectField(cls, "DF448", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF449 = new RtcmDataField(env->getStaticObjectField(cls, "DF449", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF450 = new RtcmDataField(env->getStaticObjectField(cls, "DF450", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF451 = new RtcmDataField(env->getStaticObjectField(cls, "DF451", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF452 = new RtcmDataField(env->getStaticObjectField(cls, "DF452", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF453 = new RtcmDataField(env->getStaticObjectField(cls, "DF453", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF454 = new RtcmDataField(env->getStaticObjectField(cls, "DF454", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF455 = new RtcmDataField(env->getStaticObjectField(cls, "DF455", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF456 = new RtcmDataField(env->getStaticObjectField(cls, "DF456", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF457 = new RtcmDataField(env->getStaticObjectField(cls, "DF457", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF458 = new RtcmDataField(env->getStaticObjectField(cls, "DF458", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF488 = new RtcmDataField(env->getStaticObjectField(cls, "DF488", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF489 = new RtcmDataField(env->getStaticObjectField(cls, "DF489", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF490 = new RtcmDataField(env->getStaticObjectField(cls, "DF490", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF491 = new RtcmDataField(env->getStaticObjectField(cls, "DF491", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF492 = new RtcmDataField(env->getStaticObjectField(cls, "DF492", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF493 = new RtcmDataField(env->getStaticObjectField(cls, "DF493", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF494 = new RtcmDataField(env->getStaticObjectField(cls, "DF494", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF495 = new RtcmDataField(env->getStaticObjectField(cls, "DF495", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF496 = new RtcmDataField(env->getStaticObjectField(cls, "DF496", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF497 = new RtcmDataField(env->getStaticObjectField(cls, "DF497", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF498 = new RtcmDataField(env->getStaticObjectField(cls, "DF498", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF499 = new RtcmDataField(env->getStaticObjectField(cls, "DF499", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF500 = new RtcmDataField(env->getStaticObjectField(cls, "DF500", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF501 = new RtcmDataField(env->getStaticObjectField(cls, "DF501", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF502 = new RtcmDataField(env->getStaticObjectField(cls, "DF502", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF503 = new RtcmDataField(env->getStaticObjectField(cls, "DF503", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF504 = new RtcmDataField(env->getStaticObjectField(cls, "DF504", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF505 = new RtcmDataField(env->getStaticObjectField(cls, "DF505", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF506 = new RtcmDataField(env->getStaticObjectField(cls, "DF506", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF507 = new RtcmDataField(env->getStaticObjectField(cls, "DF507", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF508 = new RtcmDataField(env->getStaticObjectField(cls, "DF508", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF509 = new RtcmDataField(env->getStaticObjectField(cls, "DF509", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF510 = new RtcmDataField(env->getStaticObjectField(cls, "DF510", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF511 = new RtcmDataField(env->getStaticObjectField(cls, "DF511", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF512 = new RtcmDataField(env->getStaticObjectField(cls, "DF512", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF513 = new RtcmDataField(env->getStaticObjectField(cls, "DF513", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF514 = new RtcmDataField(env->getStaticObjectField(cls, "DF514", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF515 = new RtcmDataField(env->getStaticObjectField(cls, "DF515", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmDataField RtcmDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a85154f3de9bc0e0], a0.this$));
          }

          JArray< RtcmDataField > RtcmDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_e41c0221a6cedd63]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args);
          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmDataField_values(PyTypeObject *type);
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data);
          static PyGetSetDef t_RtcmDataField__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmDataField__methods_[] = {
            DECLARE_METHOD(t_RtcmDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmDataField)[] = {
            { Py_tp_methods, t_RtcmDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmDataField, t_RtcmDataField, RtcmDataField);
          PyObject *t_RtcmDataField::wrap_Object(const RtcmDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmDataField), &PY_TYPE_DEF(RtcmDataField), module, "RtcmDataField", 0);
          }

          void t_RtcmDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "class_", make_descriptor(RtcmDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "wrapfn_", make_descriptor(t_RtcmDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF002", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF009", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF038", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF040", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF068", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF068)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF071", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF071)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF076", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF076)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF077", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF077)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF078", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF078)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF079", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF079)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF081", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF081)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF082", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF082)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF083", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF083)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF084", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF084)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF085", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF085)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF086", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF086)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF087", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF087)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF088", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF088)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF089", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF089)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF090", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF090)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF091", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF091)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF092", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF092)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF093", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF093)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF094", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF094)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF095", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF095)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF096", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF096)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF097", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF097)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF098", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF098)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF099", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF099)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF100", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF100)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF101", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF101)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF102", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF102)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF103", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF103)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF104", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF104)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF105", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF105)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF106", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF106)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF107", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF107)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF108", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF108)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF109", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF109)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF110", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF110)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF111", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF111)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF112", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF112)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF113", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF113)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF114", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF114)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF115", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF115)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF116", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF116)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF117", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF117)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF118", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF118)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF119", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF119)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF120", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF120)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF121", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF121)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF122", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF122)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF123", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF123)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF124", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF124)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF125", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF125)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF126", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF126)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF127", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF127)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF128", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF128)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF129", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF129)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF130", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF130)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF131", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF131)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF132", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF132)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF133", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF133)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF134", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF134)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF135", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF135)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF136", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF136)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF137", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF137)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF252", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF252)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF289", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF289)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF290", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF290)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF291", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF291)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF292", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF292)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF293", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF293)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF294", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF294)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF295", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF295)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF296", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF296)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF297", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF297)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF298", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF298)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF299", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF299)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF300", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF300)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF301", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF301)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF302", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF302)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF303", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF303)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF304", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF304)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF305", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF305)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF306", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF306)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF307", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF307)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF308", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF308)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF309", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF309)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF310", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF310)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF311", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF311)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF312", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF312)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF313", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF313)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF314", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF314)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF315", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF315)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF316", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF316)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF317", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF317)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF365", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF365)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF366", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF366)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF367", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF367)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF368", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF368)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF369", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF369)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF370", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF370)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF375", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF375)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF376", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF376)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF377", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF377)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF378", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF378)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF384", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF384)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF385", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF385)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF386", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF386)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF387", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF387)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF388", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF388)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF391", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF391)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF392", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF392)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF413", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF413)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF414", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF414)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF415", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF415)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF429", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF429)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF430", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF430)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF431", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF431)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF432", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF432)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF433", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF433)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF434", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF434)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF435", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF435)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF436", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF436)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF437", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF437)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF438", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF438)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF439", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF439)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF440", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF440)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF441", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF441)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF442", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF442)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF443", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF443)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF444", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF444)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF445", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF445)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF446", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF446)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF447", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF447)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF448", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF448)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF449", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF449)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF450", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF450)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF451", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF451)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF452", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF452)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF453", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF453)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF454", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF454)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF455", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF455)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF456", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF456)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF457", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF457)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF458", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF458)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF488", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF488)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF489", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF489)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF490", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF490)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF491", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF491)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF492", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF492)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF493", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF493)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF494", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF494)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF495", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF495)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF496", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF496)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF497", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF497)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF498", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF498)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF499", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF499)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF500", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF500)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF501", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF501)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF502", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF502)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF503", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF503)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF504", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF504)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF505", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF505)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF506", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF506)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF507", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF507)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF508", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF508)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF509", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF509)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF510", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF510)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF511", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF511)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF512", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF512)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF513", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF513)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF514", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF514)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF515", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF515)));
          }

          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmDataField::initializeClass, 1)))
              return NULL;
            return t_RtcmDataField::wrap_Object(RtcmDataField(((t_RtcmDataField *) arg)->object.this$));
          }
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::valueOf(a0));
              return t_RtcmDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmDataField_values(PyTypeObject *type)
          {
            JArray< RtcmDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmDataField::wrap_jobject);
          }
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *KendallsCorrelation::class$ = NULL;
        jmethodID *KendallsCorrelation::mids$ = NULL;
        bool KendallsCorrelation::live$ = false;

        jclass KendallsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/KendallsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_be124f4006dc9f69] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_3207f9c2ae7271d9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KendallsCorrelation::KendallsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        KendallsCorrelation::KendallsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

        KendallsCorrelation::KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_2d1b7d41dfd6b278], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_be124f4006dc9f69], a0.this$));
        }

        jdouble KendallsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_f77d745f2128c391]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self);
        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data);
        static PyGetSetDef t_KendallsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_KendallsCorrelation, correlationMatrix),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KendallsCorrelation__methods_[] = {
          DECLARE_METHOD(t_KendallsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, getCorrelationMatrix, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KendallsCorrelation)[] = {
          { Py_tp_methods, t_KendallsCorrelation__methods_ },
          { Py_tp_init, (void *) t_KendallsCorrelation_init_ },
          { Py_tp_getset, t_KendallsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KendallsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KendallsCorrelation, t_KendallsCorrelation, KendallsCorrelation);

        void t_KendallsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(KendallsCorrelation), &PY_TYPE_DEF(KendallsCorrelation), module, "KendallsCorrelation", 0);
        }

        void t_KendallsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "class_", make_descriptor(KendallsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "wrapfn_", make_descriptor(t_KendallsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KendallsCorrelation::initializeClass, 1)))
            return NULL;
          return t_KendallsCorrelation::wrap_Object(KendallsCorrelation(((t_KendallsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KendallsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KendallsCorrelation object((jobject) NULL);

              INT_CALL(object = KendallsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CovarianceMethod::class$ = NULL;
            jmethodID *CovarianceMethod::mids$ = NULL;
            bool CovarianceMethod::live$ = false;
            CovarianceMethod *CovarianceMethod::CALCULATED = NULL;
            CovarianceMethod *CovarianceMethod::DEFAULT = NULL;

            jclass CovarianceMethod::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CovarianceMethod");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_483268284b6a72b6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_values_53ceb335c46e8998] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CALCULATED = new CovarianceMethod(env->getStaticObjectField(cls, "CALCULATED", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                DEFAULT = new CovarianceMethod(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CovarianceMethod CovarianceMethod::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CovarianceMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_483268284b6a72b6], a0.this$));
            }

            JArray< CovarianceMethod > CovarianceMethod::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CovarianceMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_53ceb335c46e8998]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args);
            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CovarianceMethod_values(PyTypeObject *type);
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data);
            static PyGetSetDef t_CovarianceMethod__fields_[] = {
              DECLARE_GET_FIELD(t_CovarianceMethod, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CovarianceMethod__methods_[] = {
              DECLARE_METHOD(t_CovarianceMethod, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, of_, METH_VARARGS),
              DECLARE_METHOD(t_CovarianceMethod, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CovarianceMethod)[] = {
              { Py_tp_methods, t_CovarianceMethod__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CovarianceMethod__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CovarianceMethod)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CovarianceMethod, t_CovarianceMethod, CovarianceMethod);
            PyObject *t_CovarianceMethod::wrap_Object(const CovarianceMethod& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CovarianceMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CovarianceMethod::install(PyObject *module)
            {
              installType(&PY_TYPE(CovarianceMethod), &PY_TYPE_DEF(CovarianceMethod), module, "CovarianceMethod", 0);
            }

            void t_CovarianceMethod::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "class_", make_descriptor(CovarianceMethod::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "wrapfn_", make_descriptor(t_CovarianceMethod::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "boxfn_", make_descriptor(boxObject));
              env->getClass(CovarianceMethod::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "CALCULATED", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::CALCULATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "DEFAULT", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::DEFAULT)));
            }

            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CovarianceMethod::initializeClass, 1)))
                return NULL;
              return t_CovarianceMethod::wrap_Object(CovarianceMethod(((t_CovarianceMethod *) arg)->object.this$));
            }
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CovarianceMethod::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CovarianceMethod result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::valueOf(a0));
                return t_CovarianceMethod::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CovarianceMethod_values(PyTypeObject *type)
            {
              JArray< CovarianceMethod > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::values());
              return JArray<jobject>(result.this$).wrap(t_CovarianceMethod::wrap_jobject);
            }
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataField::class$ = NULL;
          jmethodID *DataField::mids$ = NULL;
          bool DataField::live$ = false;

          jclass DataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_booleanValue_48774c94bd8c4a87] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_doubleValue_432edfcc4f1507d3] = env->getMethodID(cls, "doubleValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)D");
              mids$[mid_intValue_de61c6e3a3951a65] = env->getMethodID(cls, "intValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)I");
              mids$[mid_stringValue_09ee8aa78e45f22c] = env->getMethodID(cls, "stringValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean DataField::booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_booleanValue_48774c94bd8c4a87], a0.this$);
          }

          jdouble DataField::doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_doubleValue_432edfcc4f1507d3], a0.this$);
          }

          jint DataField::intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_intValue_de61c6e3a3951a65], a0.this$);
          }

          ::java::lang::String DataField::stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_stringValue_09ee8aa78e45f22c], a0.this$, a1));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args);

          static PyMethodDef t_DataField__methods_[] = {
            DECLARE_METHOD(t_DataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, booleanValue, METH_O),
            DECLARE_METHOD(t_DataField, doubleValue, METH_O),
            DECLARE_METHOD(t_DataField, intValue, METH_O),
            DECLARE_METHOD(t_DataField, stringValue, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataField)[] = {
            { Py_tp_methods, t_DataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DataField, t_DataField, DataField);

          void t_DataField::install(PyObject *module)
          {
            installType(&PY_TYPE(DataField), &PY_TYPE_DEF(DataField), module, "DataField", 0);
          }

          void t_DataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "class_", make_descriptor(DataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "wrapfn_", make_descriptor(t_DataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataField::initializeClass, 1)))
              return NULL;
            return t_DataField::wrap_Object(DataField(((t_DataField *) arg)->object.this$));
          }
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.booleanValue(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "booleanValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.doubleValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "doubleValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intValue(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "intValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.stringValue(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "stringValue", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LoveNumbers::class$ = NULL;
      jmethodID *LoveNumbers::mids$ = NULL;
      bool LoveNumbers::live$ = false;

      jclass LoveNumbers::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LoveNumbers");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19b9908f77e1bb8a] = env->getMethodID(cls, "<init>", "([[D[[D[[D)V");
          mids$[mid_getImaginary_cad98089d00f8a5b] = env->getMethodID(cls, "getImaginary", "(II)D");
          mids$[mid_getPlus_cad98089d00f8a5b] = env->getMethodID(cls, "getPlus", "(II)D");
          mids$[mid_getReal_cad98089d00f8a5b] = env->getMethodID(cls, "getReal", "(II)D");
          mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoveNumbers::LoveNumbers(const JArray< JArray< jdouble > > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19b9908f77e1bb8a, a0.this$, a1.this$, a2.this$)) {}

      jdouble LoveNumbers::getImaginary(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_cad98089d00f8a5b], a0, a1);
      }

      jdouble LoveNumbers::getPlus(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPlus_cad98089d00f8a5b], a0, a1);
      }

      jdouble LoveNumbers::getReal(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_cad98089d00f8a5b], a0, a1);
      }

      jint LoveNumbers::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self);
      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data);
      static PyGetSetDef t_LoveNumbers__fields_[] = {
        DECLARE_GET_FIELD(t_LoveNumbers, size),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoveNumbers__methods_[] = {
        DECLARE_METHOD(t_LoveNumbers, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, getImaginary, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getPlus, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getReal, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoveNumbers)[] = {
        { Py_tp_methods, t_LoveNumbers__methods_ },
        { Py_tp_init, (void *) t_LoveNumbers_init_ },
        { Py_tp_getset, t_LoveNumbers__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoveNumbers)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LoveNumbers, t_LoveNumbers, LoveNumbers);

      void t_LoveNumbers::install(PyObject *module)
      {
        installType(&PY_TYPE(LoveNumbers), &PY_TYPE_DEF(LoveNumbers), module, "LoveNumbers", 0);
      }

      void t_LoveNumbers::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "class_", make_descriptor(LoveNumbers::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "wrapfn_", make_descriptor(t_LoveNumbers::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoveNumbers::initializeClass, 1)))
          return NULL;
        return t_LoveNumbers::wrap_Object(LoveNumbers(((t_LoveNumbers *) arg)->object.this$));
      }
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoveNumbers::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > a1((jobject) NULL);
        JArray< JArray< jdouble > > a2((jobject) NULL);
        LoveNumbers object((jobject) NULL);

        if (!parseArgs(args, "[[D[[D[[D", &a0, &a1, &a2))
        {
          INT_CALL(object = LoveNumbers(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getImaginary(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPlus(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPlus", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getReal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaFieldIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaFieldIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_81520b552cb3fa26] = env->getMethodID(cls, "getMaxGrowth", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMinReduction_81520b552cb3fa26] = env->getMethodID(cls, "getMinReduction", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_81520b552cb3fa26] = env->getMethodID(cls, "getSafety", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_75ca69013be095d1] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_f2b4bfa0af1007e8] = env->getMethodID(cls, "setMaxGrowth", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setMinReduction_f2b4bfa0af1007e8] = env->getMethodID(cls, "setMinReduction", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setSafety_f2b4bfa0af1007e8] = env->getMethodID(cls, "setSafety", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_createInterpolator_7cba9d9178eefc1d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_estimateError_4b43ddf833459788] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_fraction_431f825c752f7b4c] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_7cdd86319cd5fd7c] = env->getMethodID(cls, "fraction", "(DD)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMaxGrowth() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMaxGrowth_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMinReduction() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMinReduction_81520b552cb3fa26]));
        }

        jint EmbeddedRungeKuttaFieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getSafety() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSafety_81520b552cb3fa26]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative EmbeddedRungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_75ca69013be095d1], a0.this$, a1.this$, a2.this$));
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMaxGrowth(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_f2b4bfa0af1007e8], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMinReduction(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_f2b4bfa0af1007e8], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setSafety(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_f2b4bfa0af1007e8], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, safety),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaFieldIntegrator, t_EmbeddedRungeKuttaFieldIntegrator, EmbeddedRungeKuttaFieldIntegrator);
        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(const EmbeddedRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator), module, "EmbeddedRungeKuttaFieldIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(EmbeddedRungeKuttaFieldIntegrator(((t_EmbeddedRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxGrowth());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinReduction());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSafety());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxGrowth());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinReduction());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSafety());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *FieldElement::class$ = NULL;
    jmethodID *FieldElement::mids$ = NULL;
    bool FieldElement::live$ = false;

    jclass FieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/FieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_392eff94748018d4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_392eff94748018d4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
        mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
        mids$[mid_isZero_9ab94ac1dc23b105] = env->getMethodID(cls, "isZero", "()Z");
        mids$[mid_multiply_6c5caf579ccf9ce5] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_392eff94748018d4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_negate_2ff8de927fda4153] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_2ff8de927fda4153] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_392eff94748018d4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldElement FieldElement::add(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_add_392eff94748018d4], a0.this$));
    }

    FieldElement FieldElement::divide(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_divide_392eff94748018d4], a0.this$));
    }

    ::org::hipparchus::Field FieldElement::getField() const
    {
      return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
    }

    jdouble FieldElement::getReal() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
    }

    jboolean FieldElement::isZero() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isZero_9ab94ac1dc23b105]);
    }

    FieldElement FieldElement::multiply(jint a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_6c5caf579ccf9ce5], a0));
    }

    FieldElement FieldElement::multiply(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_392eff94748018d4], a0.this$));
    }

    FieldElement FieldElement::negate() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_negate_2ff8de927fda4153]));
    }

    FieldElement FieldElement::reciprocal() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_2ff8de927fda4153]));
    }

    FieldElement FieldElement::subtract(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_392eff94748018d4], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_getField(t_FieldElement *self);
    static PyObject *t_FieldElement_getReal(t_FieldElement *self);
    static PyObject *t_FieldElement_isZero(t_FieldElement *self);
    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_negate(t_FieldElement *self);
    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self);
    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data);
    static PyGetSetDef t_FieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_FieldElement, field),
      DECLARE_GET_FIELD(t_FieldElement, real),
      DECLARE_GET_FIELD(t_FieldElement, zero),
      DECLARE_GET_FIELD(t_FieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldElement__methods_[] = {
      DECLARE_METHOD(t_FieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, add, METH_O),
      DECLARE_METHOD(t_FieldElement, divide, METH_O),
      DECLARE_METHOD(t_FieldElement, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, getReal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, isZero, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, negate, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, reciprocal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, subtract, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldElement)[] = {
      { Py_tp_methods, t_FieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_FieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldElement, t_FieldElement, FieldElement);
    PyObject *t_FieldElement::wrap_Object(const FieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_FieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_FieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldElement), &PY_TYPE_DEF(FieldElement), module, "FieldElement", 0);
    }

    void t_FieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "class_", make_descriptor(FieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "wrapfn_", make_descriptor(t_FieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldElement::initializeClass, 1)))
        return NULL;
      return t_FieldElement::wrap_Object(FieldElement(((t_FieldElement *) arg)->object.this$));
    }
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "divide", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_getField(t_FieldElement *self)
    {
      ::org::hipparchus::Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_FieldElement_getReal(t_FieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getReal());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_FieldElement_isZero(t_FieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isZero());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
        {
          FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "multiply", args);
      return NULL;
    }

    static PyObject *t_FieldElement_negate(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.negate());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.reciprocal());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subtract", arg);
      return NULL;
    }
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data)
    {
      ::org::hipparchus::Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(value);
    }

    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getReal());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isZero());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinCos::class$ = NULL;
      jmethodID *SinCos::mids$ = NULL;
      bool SinCos::live$ = false;

      jclass SinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cos_b74f83833fdad017] = env->getMethodID(cls, "cos", "()D");
          mids$[mid_difference_a483e6970cd1d876] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sin_b74f83833fdad017] = env->getMethodID(cls, "sin", "()D");
          mids$[mid_sum_a483e6970cd1d876] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinCos::cos() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cos_b74f83833fdad017]);
      }

      SinCos SinCos::difference(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_a483e6970cd1d876], a0.this$, a1.this$));
      }

      jdouble SinCos::sin() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sin_b74f83833fdad017]);
      }

      SinCos SinCos::sum(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_a483e6970cd1d876], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_cos(t_SinCos *self);
      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinCos_sin(t_SinCos *self);
      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinCos__methods_[] = {
        DECLARE_METHOD(t_SinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinCos)[] = {
        { Py_tp_methods, t_SinCos__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinCos, t_SinCos, SinCos);

      void t_SinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(SinCos), &PY_TYPE_DEF(SinCos), module, "SinCos", 0);
      }

      void t_SinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "class_", make_descriptor(SinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "wrapfn_", make_descriptor(t_SinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinCos::initializeClass, 1)))
          return NULL;
        return t_SinCos::wrap_Object(SinCos(((t_SinCos *) arg)->object.this$));
      }
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinCos_cos(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cos());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::difference(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinCos_sin(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sin());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::sum(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationDataSet::class$ = NULL;
          jmethodID *ObservationDataSet::mids$ = NULL;
          bool ObservationDataSet::live$ = false;

          jclass ObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_53ad3821ecd88139] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/time/AbsoluteDate;IDLjava/util/List;)V");
              mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEventFlag_55546ef6a647f39b] = env->getMethodID(cls, "getEventFlag", "()I");
              mids$[mid_getObservationData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getRcvrClkOffset_b74f83833fdad017] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatellite_8afd42585cbd5311] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationDataSet::ObservationDataSet(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53ad3821ecd88139, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate ObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
          }

          jint ObservationDataSet::getEventFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getEventFlag_55546ef6a647f39b]);
          }

          ::java::util::List ObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_e62d3bb06d56d7e3]));
          }

          jdouble ObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_b74f83833fdad017]);
          }

          ::org::orekit::gnss::SatInSystem ObservationDataSet::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_8afd42585cbd5311]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data);
          static PyGetSetDef t_ObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationDataSet, date),
            DECLARE_GET_FIELD(t_ObservationDataSet, eventFlag),
            DECLARE_GET_FIELD(t_ObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_ObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_ObservationDataSet, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_ObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getEventFlag, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationDataSet)[] = {
            { Py_tp_methods, t_ObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_ObservationDataSet_init_ },
            { Py_tp_getset, t_ObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationDataSet, t_ObservationDataSet, ObservationDataSet);

          void t_ObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationDataSet), &PY_TYPE_DEF(ObservationDataSet), module, "ObservationDataSet", 0);
          }

          void t_ObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "class_", make_descriptor(ObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "wrapfn_", make_descriptor(t_ObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_ObservationDataSet::wrap_Object(ObservationDataSet(((t_ObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jint a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            ObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kkIDK", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEventFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEventFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SsrUpdateInterval::class$ = NULL;
            jmethodID *SsrUpdateInterval::mids$ = NULL;
            bool SsrUpdateInterval::live$ = false;

            jclass SsrUpdateInterval::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SsrUpdateInterval");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getUpdateInterval_b74f83833fdad017] = env->getMethodID(cls, "getUpdateInterval", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrUpdateInterval::SsrUpdateInterval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jdouble SsrUpdateInterval::getUpdateInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getUpdateInterval_b74f83833fdad017]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self);
            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data);
            static PyGetSetDef t_SsrUpdateInterval__fields_[] = {
              DECLARE_GET_FIELD(t_SsrUpdateInterval, updateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrUpdateInterval__methods_[] = {
              DECLARE_METHOD(t_SsrUpdateInterval, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, getUpdateInterval, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrUpdateInterval)[] = {
              { Py_tp_methods, t_SsrUpdateInterval__methods_ },
              { Py_tp_init, (void *) t_SsrUpdateInterval_init_ },
              { Py_tp_getset, t_SsrUpdateInterval__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrUpdateInterval)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrUpdateInterval, t_SsrUpdateInterval, SsrUpdateInterval);

            void t_SsrUpdateInterval::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrUpdateInterval), &PY_TYPE_DEF(SsrUpdateInterval), module, "SsrUpdateInterval", 0);
            }

            void t_SsrUpdateInterval::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "class_", make_descriptor(SsrUpdateInterval::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "wrapfn_", make_descriptor(t_SsrUpdateInterval::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrUpdateInterval::initializeClass, 1)))
                return NULL;
              return t_SsrUpdateInterval::wrap_Object(SsrUpdateInterval(((t_SsrUpdateInterval *) arg)->object.this$));
            }
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrUpdateInterval::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SsrUpdateInterval object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SsrUpdateInterval(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Fieldifier::class$ = NULL;
      jmethodID *Fieldifier::mids$ = NULL;
      bool Fieldifier::live$ = false;

      jclass Fieldifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Fieldifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fieldify_9b0122682636b413] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_fieldify_1115a57aafd01f21] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_fieldify_e3682f5ba20b6fed] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::orbits::FieldOrbit(env->callStaticObjectMethod(cls, mids$[mid_fieldify_9b0122682636b413], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::FieldStateCovariance Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::StateCovariance & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::propagation::FieldStateCovariance(env->callStaticObjectMethod(cls, mids$[mid_fieldify_1115a57aafd01f21], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::hipparchus::linear::RealMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_fieldify_e3682f5ba20b6fed], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Fieldifier__methods_[] = {
        DECLARE_METHOD(t_Fieldifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, fieldify, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fieldifier)[] = {
        { Py_tp_methods, t_Fieldifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fieldifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fieldifier, t_Fieldifier, Fieldifier);

      void t_Fieldifier::install(PyObject *module)
      {
        installType(&PY_TYPE(Fieldifier), &PY_TYPE_DEF(Fieldifier), module, "Fieldifier", 0);
      }

      void t_Fieldifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "class_", make_descriptor(Fieldifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "wrapfn_", make_descriptor(t_Fieldifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fieldifier::initializeClass, 1)))
          return NULL;
        return t_Fieldifier::wrap_Object(Fieldifier(((t_Fieldifier *) arg)->object.this$));
      }
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fieldifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
            ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "fieldify", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinhCosh::class$ = NULL;
      jmethodID *SinhCosh::mids$ = NULL;
      bool SinhCosh::live$ = false;

      jclass SinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cosh_b74f83833fdad017] = env->getMethodID(cls, "cosh", "()D");
          mids$[mid_difference_55e7b40766cde944] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinh_b74f83833fdad017] = env->getMethodID(cls, "sinh", "()D");
          mids$[mid_sum_55e7b40766cde944] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinhCosh;Lorg/hipparchus/util/SinhCosh;)Lorg/hipparchus/util/SinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinhCosh::cosh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosh_b74f83833fdad017]);
      }

      SinhCosh SinhCosh::difference(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_55e7b40766cde944], a0.this$, a1.this$));
      }

      jdouble SinhCosh::sinh() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sinh_b74f83833fdad017]);
      }

      SinhCosh SinhCosh::sum(const SinhCosh & a0, const SinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_55e7b40766cde944], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self);
      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinhCosh__methods_[] = {
        DECLARE_METHOD(t_SinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_SinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinhCosh)[] = {
        { Py_tp_methods, t_SinhCosh__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinhCosh, t_SinhCosh, SinhCosh);

      void t_SinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(SinhCosh), &PY_TYPE_DEF(SinhCosh), module, "SinhCosh", 0);
      }

      void t_SinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "class_", make_descriptor(SinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "wrapfn_", make_descriptor(t_SinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinhCosh::initializeClass, 1)))
          return NULL;
        return t_SinhCosh::wrap_Object(SinhCosh(((t_SinhCosh *) arg)->object.this$));
      }
      static PyObject *t_SinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinhCosh_cosh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cosh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::difference(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinhCosh_sinh(t_SinhCosh *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sinh());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        SinhCosh a0((jobject) NULL);
        SinhCosh a1((jobject) NULL);
        SinhCosh result((jobject) NULL);

        if (!parseArgs(args, "kk", SinhCosh::initializeClass, SinhCosh::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinhCosh::sum(a0, a1));
          return t_SinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *PivotSelectionRule::class$ = NULL;
        jmethodID *PivotSelectionRule::mids$ = NULL;
        bool PivotSelectionRule::live$ = false;
        PivotSelectionRule *PivotSelectionRule::BLAND = NULL;
        PivotSelectionRule *PivotSelectionRule::DANTZIG = NULL;

        jclass PivotSelectionRule::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/PivotSelectionRule");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_998de040fdbee165] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/PivotSelectionRule;");
            mids$[mid_values_106e9355d9d13083] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/PivotSelectionRule;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BLAND = new PivotSelectionRule(env->getStaticObjectField(cls, "BLAND", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            DANTZIG = new PivotSelectionRule(env->getStaticObjectField(cls, "DANTZIG", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PivotSelectionRule PivotSelectionRule::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PivotSelectionRule(env->callStaticObjectMethod(cls, mids$[mid_valueOf_998de040fdbee165], a0.this$));
        }

        JArray< PivotSelectionRule > PivotSelectionRule::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PivotSelectionRule >(env->callStaticObjectMethod(cls, mids$[mid_values_106e9355d9d13083]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args);
        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type);
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data);
        static PyGetSetDef t_PivotSelectionRule__fields_[] = {
          DECLARE_GET_FIELD(t_PivotSelectionRule, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PivotSelectionRule__methods_[] = {
          DECLARE_METHOD(t_PivotSelectionRule, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, of_, METH_VARARGS),
          DECLARE_METHOD(t_PivotSelectionRule, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PivotSelectionRule)[] = {
          { Py_tp_methods, t_PivotSelectionRule__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PivotSelectionRule__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PivotSelectionRule)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PivotSelectionRule, t_PivotSelectionRule, PivotSelectionRule);
        PyObject *t_PivotSelectionRule::wrap_Object(const PivotSelectionRule& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PivotSelectionRule::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PivotSelectionRule::install(PyObject *module)
        {
          installType(&PY_TYPE(PivotSelectionRule), &PY_TYPE_DEF(PivotSelectionRule), module, "PivotSelectionRule", 0);
        }

        void t_PivotSelectionRule::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "class_", make_descriptor(PivotSelectionRule::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "wrapfn_", make_descriptor(t_PivotSelectionRule::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "boxfn_", make_descriptor(boxObject));
          env->getClass(PivotSelectionRule::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "BLAND", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::BLAND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "DANTZIG", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::DANTZIG)));
        }

        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PivotSelectionRule::initializeClass, 1)))
            return NULL;
          return t_PivotSelectionRule::wrap_Object(PivotSelectionRule(((t_PivotSelectionRule *) arg)->object.this$));
        }
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PivotSelectionRule::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PivotSelectionRule result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::valueOf(a0));
            return t_PivotSelectionRule::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type)
        {
          JArray< PivotSelectionRule > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::values());
          return JArray<jobject>(result.this$).wrap(t_PivotSelectionRule::wrap_jobject);
        }
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFieldFactory::class$ = NULL;
          jmethodID *GravityFieldFactory::mids$ = NULL;
          bool GravityFieldFactory::live$ = false;
          ::java::lang::String *GravityFieldFactory::EGM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CHAT_EPSILON_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CNM_SNM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_HF_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::GRGS_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::ICGEM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::SHM_FILENAME = NULL;

          jclass GravityFieldFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFieldFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_8553ac96c69b089e] = env->getStaticMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_a78d658c1995df90] = env->getStaticMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_245a505170348b26] = env->getStaticMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_405c10e81094d951] = env->getStaticMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33] = env->getStaticMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getGravityFields_7edff6ac38775a4d] = env->getStaticMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
              mids$[mid_getNormalizedProvider_c13ce70d0d253382] = env->getStaticMethodID(cls, "getNormalizedProvider", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_a686ea82e96d2c01] = env->getStaticMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_2e45d418bc95ef10] = env->getStaticMethodID(cls, "getNormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80] = env->getStaticMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_39b43a702bd6611c] = env->getStaticMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizationFactors_4bd4edddfa48c3b3] = env->getStaticMethodID(cls, "getUnnormalizationFactors", "(II)[[D");
              mids$[mid_getUnnormalizedProvider_d5f7c11565985cd3] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_3cf900d10629a5ef] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_f43b948b764d44fc] = env->getStaticMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EGM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EGM_FILENAME", "Ljava/lang/String;"));
              FES_CHAT_EPSILON_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CHAT_EPSILON_FILENAME", "Ljava/lang/String;"));
              FES_CNM_SNM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CNM_SNM_FILENAME", "Ljava/lang/String;"));
              FES_HF_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_HF_FILENAME", "Ljava/lang/String;"));
              GRGS_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "GRGS_FILENAME", "Ljava/lang/String;"));
              ICGEM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "ICGEM_FILENAME", "Ljava/lang/String;"));
              SHM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "SHM_FILENAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GravityFieldFactory::addDefaultOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2]);
          }

          void GravityFieldFactory::addDefaultPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2]);
          }

          void GravityFieldFactory::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addOceanTidesReader_8553ac96c69b089e], a0.this$);
          }

          void GravityFieldFactory::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addPotentialCoefficientsReader_a78d658c1995df90], a0.this$);
          }

          void GravityFieldFactory::clearOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearOceanTidesReaders_a1fa5dae97ea5ed2]);
          }

          void GravityFieldFactory::clearPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2]);
          }

          void GravityFieldFactory::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_configureOceanLoadDeformationCoefficients_245a505170348b26], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantNormalizedProvider_405c10e81094d951], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields GravityFieldFactory::getGravityFields()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callStaticObjectMethod(cls, mids$[mid_getGravityFields_7edff6ac38775a4d]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_c13ce70d0d253382], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_a686ea82e96d2c01], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_2e45d418bc95ef10], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients GravityFieldFactory::getOceanLoadDeformationCoefficients()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80]));
          }

          ::java::util::List GravityFieldFactory::getOceanTidesWaves(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_getOceanTidesWaves_39b43a702bd6611c], a0, a1));
          }

          JArray< JArray< jdouble > > GravityFieldFactory::getUnnormalizationFactors(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizationFactors_4bd4edddfa48c3b3], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_d5f7c11565985cd3], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_3cf900d10629a5ef], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader GravityFieldFactory::readGravityField(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callStaticObjectMethod(cls, mids$[mid_readGravityField_f43b948b764d44fc], a0, a1));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data);
          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data);
          static PyGetSetDef t_GravityFieldFactory__fields_[] = {
            DECLARE_GET_FIELD(t_GravityFieldFactory, gravityFields),
            DECLARE_GET_FIELD(t_GravityFieldFactory, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GravityFieldFactory__methods_[] = {
            DECLARE_METHOD(t_GravityFieldFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addOceanTidesReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addPotentialCoefficientsReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, configureOceanLoadDeformationCoefficients, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getGravityFields, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanLoadDeformationCoefficients, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanTidesWaves, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizationFactors, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, readGravityField, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFieldFactory)[] = {
            { Py_tp_methods, t_GravityFieldFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GravityFieldFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFieldFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFieldFactory, t_GravityFieldFactory, GravityFieldFactory);

          void t_GravityFieldFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFieldFactory), &PY_TYPE_DEF(GravityFieldFactory), module, "GravityFieldFactory", 0);
          }

          void t_GravityFieldFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "class_", make_descriptor(GravityFieldFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "wrapfn_", make_descriptor(t_GravityFieldFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GravityFieldFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "EGM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::EGM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CHAT_EPSILON_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CHAT_EPSILON_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CNM_SNM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CNM_SNM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_HF_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_HF_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "GRGS_FILENAME", make_descriptor(j2p(*GravityFieldFactory::GRGS_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "ICGEM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::ICGEM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "SHM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::SHM_FILENAME)));
          }

          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFieldFactory::initializeClass, 1)))
              return NULL;
            return t_GravityFieldFactory::wrap_Object(GravityFieldFactory(((t_GravityFieldFactory *) arg)->object.this$));
          }
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFieldFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError(type, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizationFactors(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError(type, "getUnnormalizationFactors", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
            OBJ_CALL(value = self->object.getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
          }

          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrData::class$ = NULL;
            jmethodID *SsrData::mids$ = NULL;
            bool SsrData::live$ = false;

            jclass SsrData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrData::SsrData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SsrData__methods_[] = {
              DECLARE_METHOD(t_SsrData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrData)[] = {
              { Py_tp_methods, t_SsrData__methods_ },
              { Py_tp_init, (void *) t_SsrData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrData, t_SsrData, SsrData);

            void t_SsrData::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrData), &PY_TYPE_DEF(SsrData), module, "SsrData", 0);
            }

            void t_SsrData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "class_", make_descriptor(SsrData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "wrapfn_", make_descriptor(t_SsrData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrData::initializeClass, 1)))
                return NULL;
              return t_SsrData::wrap_Object(SsrData(((t_SsrData *) arg)->object.this$));
            }
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds)
            {
              SsrData object((jobject) NULL);

              INT_CALL(object = SsrData());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder::class$ = NULL;
      jmethodID *WaypointPVBuilder::mids$ = NULL;
      bool WaypointPVBuilder::live$ = false;

      jclass WaypointPVBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_993cc46df621d9cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/WaypointPVBuilder$InterpolationFactory;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_addWaypoint_28e0163f5d6e8ccf] = env->getMethodID(cls, "addWaypoint", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_build_8a41319e47f3bd7c] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_cartesianBuilder_240b6619f67611e2] = env->getStaticMethodID(cls, "cartesianBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantAfter_e846a6f6ef5fc3c6] = env->getMethodID(cls, "constantAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantBefore_e846a6f6ef5fc3c6] = env->getMethodID(cls, "constantBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_greatCircleBuilder_240b6619f67611e2] = env->getStaticMethodID(cls, "greatCircleBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidAfter_e846a6f6ef5fc3c6] = env->getMethodID(cls, "invalidAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidBefore_e846a6f6ef5fc3c6] = env->getMethodID(cls, "invalidBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_loxodromeBuilder_240b6619f67611e2] = env->getStaticMethodID(cls, "loxodromeBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_createInitial_d2a94228dd25ab45] = env->getMethodID(cls, "createInitial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_createFinal_d2a94228dd25ab45] = env->getMethodID(cls, "createFinal", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WaypointPVBuilder::WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_993cc46df621d9cd, a0.this$, a1.this$)) {}

      WaypointPVBuilder WaypointPVBuilder::addWaypoint(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_addWaypoint_28e0163f5d6e8ccf], a0.this$, a1.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder::build() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_8a41319e47f3bd7c]));
      }

      WaypointPVBuilder WaypointPVBuilder::cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_cartesianBuilder_240b6619f67611e2], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::constantAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantAfter_e846a6f6ef5fc3c6]));
      }

      WaypointPVBuilder WaypointPVBuilder::constantBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantBefore_e846a6f6ef5fc3c6]));
      }

      WaypointPVBuilder WaypointPVBuilder::greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_greatCircleBuilder_240b6619f67611e2], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidAfter_e846a6f6ef5fc3c6]));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidBefore_e846a6f6ef5fc3c6]));
      }

      WaypointPVBuilder WaypointPVBuilder::loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_loxodromeBuilder_240b6619f67611e2], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args);
      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_WaypointPVBuilder__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, addWaypoint, METH_VARARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, build, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, cartesianBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, greatCircleBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, loxodromeBuilder, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder)[] = {
        { Py_tp_methods, t_WaypointPVBuilder__methods_ },
        { Py_tp_init, (void *) t_WaypointPVBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder, t_WaypointPVBuilder, WaypointPVBuilder);

      void t_WaypointPVBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder), &PY_TYPE_DEF(WaypointPVBuilder), module, "WaypointPVBuilder", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "InterpolationFactory", make_descriptor(&PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory)));
      }

      void t_WaypointPVBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "class_", make_descriptor(WaypointPVBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "wrapfn_", make_descriptor(t_WaypointPVBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder::wrap_Object(WaypointPVBuilder(((t_WaypointPVBuilder *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory a0((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
        WaypointPVBuilder object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = WaypointPVBuilder(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.addWaypoint(a0, a1));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addWaypoint", args);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::cartesianBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cartesianBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::greatCircleBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "greatCircleBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::loxodromeBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "loxodromeBuilder", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationDetector::class$ = NULL;
        jmethodID *AngularSeparationDetector::mids$ = NULL;
        bool AngularSeparationDetector::live$ = false;

        jclass AngularSeparationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd7c2e53f14940e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBeacon_8a41319e47f3bd7c] = env->getMethodID(cls, "getBeacon", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getObserver_8a41319e47f3bd7c] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_b74f83833fdad017] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_create_c10932a2d49ce2d6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationDetector::AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fd7c2e53f14940e1, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getBeacon() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getBeacon_8a41319e47f3bd7c]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getObserver() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getObserver_8a41319e47f3bd7c]));
        }

        jdouble AngularSeparationDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_b74f83833fdad017]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args);
        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationDetector, beacon),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, observer),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getBeacon, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getProximityAngle, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationDetector)[] = {
          { Py_tp_methods, t_AngularSeparationDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationDetector_init_ },
          { Py_tp_getset, t_AngularSeparationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationDetector, t_AngularSeparationDetector, AngularSeparationDetector);
        PyObject *t_AngularSeparationDetector::wrap_Object(const AngularSeparationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationDetector), &PY_TYPE_DEF(AngularSeparationDetector), module, "AngularSeparationDetector", 0);
        }

        void t_AngularSeparationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "class_", make_descriptor(AngularSeparationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "wrapfn_", make_descriptor(t_AngularSeparationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationDetector::wrap_Object(AngularSeparationDetector(((t_AngularSeparationDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalStateException::class$ = NULL;
      jmethodID *MathIllegalStateException::mids$ = NULL;
      bool MathIllegalStateException::live$ = false;

      jclass MathIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalStateException::MathIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      MathIllegalStateException::MathIllegalStateException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalStateException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalStateException)[] = {
        { Py_tp_methods, t_MathIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalStateException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalStateException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalStateException, t_MathIllegalStateException, MathIllegalStateException);

      void t_MathIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalStateException), &PY_TYPE_DEF(MathIllegalStateException), module, "MathIllegalStateException", 0);
      }

      void t_MathIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "class_", make_descriptor(MathIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "wrapfn_", make_descriptor(t_MathIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalStateException::wrap_Object(MathIllegalStateException(((t_MathIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "java/lang/Class.h"
#include "java/util/Random.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *JDKRandomGenerator::class$ = NULL;
      jmethodID *JDKRandomGenerator::mids$ = NULL;
      bool JDKRandomGenerator::live$ = false;

      jclass JDKRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/JDKRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_61462ed9aef3cca2] = env->getMethodID(cls, "<init>", "(Ljava/util/Random;)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JDKRandomGenerator::JDKRandomGenerator() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      JDKRandomGenerator::JDKRandomGenerator(const ::java::util::Random & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_61462ed9aef3cca2, a0.this$)) {}

      JDKRandomGenerator::JDKRandomGenerator(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jboolean JDKRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void JDKRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      jdouble JDKRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat JDKRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jdouble JDKRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint JDKRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jint JDKRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong JDKRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
      }

      void JDKRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void JDKRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void JDKRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args);
      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args);
      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_JDKRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_JDKRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JDKRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_JDKRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_JDKRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JDKRandomGenerator)[] = {
        { Py_tp_methods, t_JDKRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_JDKRandomGenerator_init_ },
        { Py_tp_getset, t_JDKRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JDKRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(JDKRandomGenerator, t_JDKRandomGenerator, JDKRandomGenerator);

      void t_JDKRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(JDKRandomGenerator), &PY_TYPE_DEF(JDKRandomGenerator), module, "JDKRandomGenerator", 0);
      }

      void t_JDKRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "class_", make_descriptor(JDKRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "wrapfn_", make_descriptor(t_JDKRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JDKRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JDKRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JDKRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_JDKRandomGenerator::wrap_Object(JDKRandomGenerator(((t_JDKRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_JDKRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JDKRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JDKRandomGenerator_init_(t_JDKRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JDKRandomGenerator object((jobject) NULL);

            INT_CALL(object = JDKRandomGenerator());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::util::Random a0((jobject) NULL);
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Random::initializeClass, &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            JDKRandomGenerator object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = JDKRandomGenerator(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JDKRandomGenerator_nextBoolean(t_JDKRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextBytes(t_JDKRandomGenerator *self, PyObject *args)
      {
        JArray< jbyte > a0((jobject) NULL);

        if (!parseArgs(args, "[B", &a0))
        {
          OBJ_CALL(self->object.nextBytes(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextDouble(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextFloat(t_JDKRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextGaussian(t_JDKRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextInt(t_JDKRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_nextLong(t_JDKRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_JDKRandomGenerator_setSeed(t_JDKRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(JDKRandomGenerator), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_JDKRandomGenerator_set__seed(t_JDKRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionMappingAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionMappingAdapter::mids$ = NULL;
          bool MultivariateFunctionMappingAdapter::live$ = false;

          jclass MultivariateFunctionMappingAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_81369b1ee12447b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[D)V");
              mids$[mid_boundedToUnbounded_14dee4cb8cc3e959] = env->getMethodID(cls, "boundedToUnbounded", "([D)[D");
              mids$[mid_unboundedToBounded_14dee4cb8cc3e959] = env->getMethodID(cls, "unboundedToBounded", "([D)[D");
              mids$[mid_value_b060e4326765ccf1] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionMappingAdapter::MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81369b1ee12447b6, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MultivariateFunctionMappingAdapter::boundedToUnbounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_boundedToUnbounded_14dee4cb8cc3e959], a0.this$));
          }

          JArray< jdouble > MultivariateFunctionMappingAdapter::unboundedToBounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_unboundedToBounded_14dee4cb8cc3e959], a0.this$));
          }

          jdouble MultivariateFunctionMappingAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_b060e4326765ccf1], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionMappingAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, boundedToUnbounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, unboundedToBounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionMappingAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionMappingAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionMappingAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionMappingAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionMappingAdapter, t_MultivariateFunctionMappingAdapter, MultivariateFunctionMappingAdapter);

          void t_MultivariateFunctionMappingAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionMappingAdapter), &PY_TYPE_DEF(MultivariateFunctionMappingAdapter), module, "MultivariateFunctionMappingAdapter", 0);
          }

          void t_MultivariateFunctionMappingAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "class_", make_descriptor(MultivariateFunctionMappingAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionMappingAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionMappingAdapter::wrap_Object(MultivariateFunctionMappingAdapter(((t_MultivariateFunctionMappingAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            MultivariateFunctionMappingAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MultivariateFunctionMappingAdapter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.boundedToUnbounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "boundedToUnbounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.unboundedToBounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "unboundedToBounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawSteering.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawSteering::class$ = NULL;
      jmethodID *YawSteering::mids$ = NULL;
      bool YawSteering::live$ = false;

      jclass YawSteering::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawSteering");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9435fe02148b40be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_896ee4d68989b1e8] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_21845cfb0034fe1c] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawSteering::YawSteering(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_9435fe02148b40be, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude YawSteering::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawSteering::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self);
      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data);
      static PyGetSetDef t_YawSteering__fields_[] = {
        DECLARE_GET_FIELD(t_YawSteering, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawSteering__methods_[] = {
        DECLARE_METHOD(t_YawSteering, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawSteering)[] = {
        { Py_tp_methods, t_YawSteering__methods_ },
        { Py_tp_init, (void *) t_YawSteering_init_ },
        { Py_tp_getset, t_YawSteering__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawSteering)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawSteering, t_YawSteering, YawSteering);

      void t_YawSteering::install(PyObject *module)
      {
        installType(&PY_TYPE(YawSteering), &PY_TYPE_DEF(YawSteering), module, "YawSteering", 0);
      }

      void t_YawSteering::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "class_", make_descriptor(YawSteering::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "wrapfn_", make_descriptor(t_YawSteering::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawSteering::initializeClass, 1)))
          return NULL;
        return t_YawSteering::wrap_Object(YawSteering(((t_YawSteering *) arg)->object.this$));
      }
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawSteering::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        YawSteering object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = YawSteering(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawSteering), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleValueChecker::class$ = NULL;
      jmethodID *SimpleValueChecker::mids$ = NULL;
      bool SimpleValueChecker::live$ = false;

      jclass SimpleValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_61306e31c9b9c365] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointValuePair;Lorg/hipparchus/optim/PointValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

      jboolean SimpleValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointValuePair & a1, const ::org::hipparchus::optim::PointValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_61306e31c9b9c365], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args);
      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args);
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data);
      static PyGetSetDef t_SimpleValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleValueChecker)[] = {
        { Py_tp_methods, t_SimpleValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleValueChecker_init_ },
        { Py_tp_getset, t_SimpleValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleValueChecker, t_SimpleValueChecker, SimpleValueChecker);
      PyObject *t_SimpleValueChecker::wrap_Object(const SimpleValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleValueChecker), &PY_TYPE_DEF(SimpleValueChecker), module, "SimpleValueChecker", 0);
      }

      void t_SimpleValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "class_", make_descriptor(SimpleValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "wrapfn_", make_descriptor(t_SimpleValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleValueChecker::wrap_Object(SimpleValueChecker(((t_SimpleValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointValuePair::initializeClass, ::org::hipparchus::optim::PointValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *TrivariateFunction::class$ = NULL;
      jmethodID *TrivariateFunction::mids$ = NULL;
      bool TrivariateFunction::live$ = false;

      jclass TrivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/TrivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f804f816b79164cb] = env->getMethodID(cls, "value", "(DDD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TrivariateFunction::value(jdouble a0, jdouble a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_f804f816b79164cb], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args);

      static PyMethodDef t_TrivariateFunction__methods_[] = {
        DECLARE_METHOD(t_TrivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrivariateFunction)[] = {
        { Py_tp_methods, t_TrivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrivariateFunction, t_TrivariateFunction, TrivariateFunction);

      void t_TrivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TrivariateFunction), &PY_TYPE_DEF(TrivariateFunction), module, "TrivariateFunction", 0);
      }

      void t_TrivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "class_", make_descriptor(TrivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "wrapfn_", make_descriptor(t_TrivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrivariateFunction::initializeClass, 1)))
          return NULL;
        return t_TrivariateFunction::wrap_Object(TrivariateFunction(((t_TrivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.value(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {

        ::java::lang::Class *PCA::class$ = NULL;
        jmethodID *PCA::mids$ = NULL;
        bool PCA::live$ = false;

        jclass PCA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/projection/PCA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_79d569e065493120] = env->getMethodID(cls, "<init>", "(IZZ)V");
            mids$[mid_fit_a97c2eb77f399243] = env->getMethodID(cls, "fit", "([[D)Lorg/hipparchus/stat/projection/PCA;");
            mids$[mid_fitAndTransform_fa7294d53f56a3e3] = env->getMethodID(cls, "fitAndTransform", "([[D)[[D");
            mids$[mid_getCenter_25e1757a36c4dde2] = env->getMethodID(cls, "getCenter", "()[D");
            mids$[mid_getComponents_3b7b373db8e7887f] = env->getMethodID(cls, "getComponents", "()[[D");
            mids$[mid_getNumComponents_55546ef6a647f39b] = env->getMethodID(cls, "getNumComponents", "()I");
            mids$[mid_getVariance_25e1757a36c4dde2] = env->getMethodID(cls, "getVariance", "()[D");
            mids$[mid_isBiasCorrection_9ab94ac1dc23b105] = env->getMethodID(cls, "isBiasCorrection", "()Z");
            mids$[mid_isScale_9ab94ac1dc23b105] = env->getMethodID(cls, "isScale", "()Z");
            mids$[mid_transform_fa7294d53f56a3e3] = env->getMethodID(cls, "transform", "([[D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PCA::PCA(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        PCA::PCA(jint a0, jboolean a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_79d569e065493120, a0, a1, a2)) {}

        PCA PCA::fit(const JArray< JArray< jdouble > > & a0) const
        {
          return PCA(env->callObjectMethod(this$, mids$[mid_fit_a97c2eb77f399243], a0.this$));
        }

        JArray< JArray< jdouble > > PCA::fitAndTransform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_fitAndTransform_fa7294d53f56a3e3], a0.this$));
        }

        JArray< jdouble > PCA::getCenter() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenter_25e1757a36c4dde2]));
        }

        JArray< JArray< jdouble > > PCA::getComponents() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getComponents_3b7b373db8e7887f]));
        }

        jint PCA::getNumComponents() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumComponents_55546ef6a647f39b]);
        }

        JArray< jdouble > PCA::getVariance() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVariance_25e1757a36c4dde2]));
        }

        jboolean PCA::isBiasCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isBiasCorrection_9ab94ac1dc23b105]);
        }

        jboolean PCA::isScale() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isScale_9ab94ac1dc23b105]);
        }

        JArray< JArray< jdouble > > PCA::transform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_transform_fa7294d53f56a3e3], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {
        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_getCenter(t_PCA *self);
        static PyObject *t_PCA_getComponents(t_PCA *self);
        static PyObject *t_PCA_getNumComponents(t_PCA *self);
        static PyObject *t_PCA_getVariance(t_PCA *self);
        static PyObject *t_PCA_isBiasCorrection(t_PCA *self);
        static PyObject *t_PCA_isScale(t_PCA *self);
        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data);
        static PyObject *t_PCA_get__center(t_PCA *self, void *data);
        static PyObject *t_PCA_get__components(t_PCA *self, void *data);
        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data);
        static PyObject *t_PCA_get__scale(t_PCA *self, void *data);
        static PyObject *t_PCA_get__variance(t_PCA *self, void *data);
        static PyGetSetDef t_PCA__fields_[] = {
          DECLARE_GET_FIELD(t_PCA, biasCorrection),
          DECLARE_GET_FIELD(t_PCA, center),
          DECLARE_GET_FIELD(t_PCA, components),
          DECLARE_GET_FIELD(t_PCA, numComponents),
          DECLARE_GET_FIELD(t_PCA, scale),
          DECLARE_GET_FIELD(t_PCA, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PCA__methods_[] = {
          DECLARE_METHOD(t_PCA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, fit, METH_O),
          DECLARE_METHOD(t_PCA, fitAndTransform, METH_O),
          DECLARE_METHOD(t_PCA, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getNumComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isBiasCorrection, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isScale, METH_NOARGS),
          DECLARE_METHOD(t_PCA, transform, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PCA)[] = {
          { Py_tp_methods, t_PCA__methods_ },
          { Py_tp_init, (void *) t_PCA_init_ },
          { Py_tp_getset, t_PCA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PCA)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PCA, t_PCA, PCA);

        void t_PCA::install(PyObject *module)
        {
          installType(&PY_TYPE(PCA), &PY_TYPE_DEF(PCA), module, "PCA", 0);
        }

        void t_PCA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "class_", make_descriptor(PCA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "wrapfn_", make_descriptor(t_PCA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PCA::initializeClass, 1)))
            return NULL;
          return t_PCA::wrap_Object(PCA(((t_PCA *) arg)->object.this$));
        }
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PCA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = PCA(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jboolean a2;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "IZZ", &a0, &a1, &a2))
              {
                INT_CALL(object = PCA(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          PCA result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fit(a0));
            return t_PCA::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "fit", arg);
          return NULL;
        }

        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fitAndTransform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "fitAndTransform", arg);
          return NULL;
        }

        static PyObject *t_PCA_getCenter(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return result.wrap();
        }

        static PyObject *t_PCA_getComponents(t_PCA *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PCA_getNumComponents(t_PCA *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumComponents());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PCA_getVariance(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVariance());
          return result.wrap();
        }

        static PyObject *t_PCA_isBiasCorrection(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isBiasCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_isScale(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isScale());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.transform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "transform", arg);
          return NULL;
        }

        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isBiasCorrection());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__center(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return value.wrap();
        }

        static PyObject *t_PCA_get__components(t_PCA *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumComponents());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PCA_get__scale(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isScale());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__variance(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVariance());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_b74f83833fdad017] = env->getMethodID(cls, "getMaxGrowth", "()D");
            mids$[mid_getMinReduction_b74f83833fdad017] = env->getMethodID(cls, "getMinReduction", "()D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_b74f83833fdad017] = env->getMethodID(cls, "getSafety", "()D");
            mids$[mid_integrate_8cb4bf2a0c64fd92] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
            mids$[mid_setMinReduction_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinReduction", "(D)V");
            mids$[mid_setSafety_8ba9fe7a847cecad] = env->getMethodID(cls, "setSafety", "(D)V");
            mids$[mid_createInterpolator_3e673c4450f1ccb4] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");
            mids$[mid_estimateError_30c238558e44050a] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMaxGrowth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_b74f83833fdad017]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMinReduction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinReduction_b74f83833fdad017]);
        }

        jint EmbeddedRungeKuttaIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getSafety() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSafety_b74f83833fdad017]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative EmbeddedRungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_8cb4bf2a0c64fd92], a0.this$, a1.this$, a2));
        }

        void EmbeddedRungeKuttaIntegrator::setMaxGrowth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_8ba9fe7a847cecad], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setMinReduction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_8ba9fe7a847cecad], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setSafety(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_8ba9fe7a847cecad], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, safety),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaIntegrator, t_EmbeddedRungeKuttaIntegrator, EmbeddedRungeKuttaIntegrator);

        void t_EmbeddedRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator), module, "EmbeddedRungeKuttaIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaIntegrator::wrap_Object(EmbeddedRungeKuttaIntegrator(((t_EmbeddedRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinReduction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSafety());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinReduction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSafety());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearObjectiveFunction::class$ = NULL;
        jmethodID *LinearObjectiveFunction::mids$ = NULL;
        bool LinearObjectiveFunction::live$ = false;

        jclass LinearObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_334f245ec9cee46b] = env->getMethodID(cls, "<init>", "([DD)V");
            mids$[mid_init$_548cc85227212ca8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_3a10cc75bd070d84] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getConstantTerm_b74f83833fdad017] = env->getMethodID(cls, "getConstantTerm", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_value_b060e4326765ccf1] = env->getMethodID(cls, "value", "([D)D");
            mids$[mid_value_532b95759e51e831] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearObjectiveFunction::LinearObjectiveFunction(const JArray< jdouble > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_334f245ec9cee46b, a0.this$, a1)) {}

        LinearObjectiveFunction::LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_548cc85227212ca8, a0.this$, a1)) {}

        jboolean LinearObjectiveFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearObjectiveFunction::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_3a10cc75bd070d84]));
        }

        jdouble LinearObjectiveFunction::getConstantTerm() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantTerm_b74f83833fdad017]);
        }

        jint LinearObjectiveFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        jdouble LinearObjectiveFunction::value(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_b060e4326765ccf1], a0.this$);
        }

        jdouble LinearObjectiveFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_532b95759e51e831], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data);
        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data);
        static PyGetSetDef t_LinearObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, coefficients),
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, constantTerm),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_LinearObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getConstantTerm, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearObjectiveFunction)[] = {
          { Py_tp_methods, t_LinearObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_LinearObjectiveFunction_init_ },
          { Py_tp_getset, t_LinearObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearObjectiveFunction, t_LinearObjectiveFunction, LinearObjectiveFunction);

        void t_LinearObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearObjectiveFunction), &PY_TYPE_DEF(LinearObjectiveFunction), module, "LinearObjectiveFunction", 0);
        }

        void t_LinearObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "class_", make_descriptor(LinearObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "wrapfn_", make_descriptor(t_LinearObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_LinearObjectiveFunction::wrap_Object(LinearObjectiveFunction(((t_LinearObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "[DD", &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitCovarianceHistoryMetadataKey::mids$ = NULL;
              bool OrbitCovarianceHistoryMetadataKey::live$ = false;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COMMENT = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_ORDERING = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_TYPE = NULL;
              OrbitCovarianceHistoryMetadataKey *OrbitCovarianceHistoryMetadataKey::COV_UNITS = NULL;

              jclass OrbitCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_eb8b4456b081202b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_6cec7ddbc04fb9fb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");
                  mids$[mid_values_f3dd757310f5e8f4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_CONFIDENCE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_FRAME_EPOCH = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_NEXT_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_ORDERING = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ORDERING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MAX = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_SCALE_MIN = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_SCALE_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  COV_UNITS = new OrbitCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_eb8b4456b081202b], a0.this$, a1.this$, a2.this$);
              }

              OrbitCovarianceHistoryMetadataKey OrbitCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6cec7ddbc04fb9fb], a0.this$));
              }

              JArray< OrbitCovarianceHistoryMetadataKey > OrbitCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f3dd757310f5e8f4]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistoryMetadataKey, t_OrbitCovarianceHistoryMetadataKey, OrbitCovarianceHistoryMetadataKey);
              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_Object(const OrbitCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCovarianceHistoryMetadataKey *self = (t_OrbitCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistoryMetadataKey), &PY_TYPE_DEF(OrbitCovarianceHistoryMetadataKey), module, "OrbitCovarianceHistoryMetadataKey", 0);
              }

              void t_OrbitCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "class_", make_descriptor(OrbitCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_CONFIDENCE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_FRAME_EPOCH", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_NEXT_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_ORDERING", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_ORDERING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MAX", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_SCALE_MIN", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_SCALE_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistoryMetadataKey), "COV_UNITS", make_descriptor(t_OrbitCovarianceHistoryMetadataKey::wrap_Object(*OrbitCovarianceHistoryMetadataKey::COV_UNITS)));
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(OrbitCovarianceHistoryMetadataKey(((t_OrbitCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_of_(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_process(t_OrbitCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_OrbitCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitCovarianceHistoryMetadataKey_get__parameters_(t_OrbitCovarianceHistoryMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
