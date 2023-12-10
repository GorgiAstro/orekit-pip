#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorChangingVisitor::class$ = NULL;
      jmethodID *RealVectorChangingVisitor::mids$ = NULL;
      bool RealVectorChangingVisitor::live$ = false;

      jclass RealVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_8336200ef3dde36b] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_60d7624725a52590] = env->getMethodID(cls, "visit", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void RealVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_8336200ef3dde36b], a0, a1, a2);
      }

      jdouble RealVectorChangingVisitor::visit(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_60d7624725a52590], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self);
      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorChangingVisitor)[] = {
        { Py_tp_methods, t_RealVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorChangingVisitor, t_RealVectorChangingVisitor, RealVectorChangingVisitor);

      void t_RealVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorChangingVisitor), &PY_TYPE_DEF(RealVectorChangingVisitor), module, "RealVectorChangingVisitor", 0);
      }

      void t_RealVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "class_", make_descriptor(RealVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "wrapfn_", make_descriptor(t_RealVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorChangingVisitor::wrap_Object(RealVectorChangingVisitor(((t_RealVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *GnssData::class$ = NULL;
          jmethodID *GnssData::mids$ = NULL;
          bool GnssData::live$ = false;

          jclass GnssData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/GnssData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96122b01d902d997] = env->getMethodID(cls, "<init>", "([BI)V");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GnssData::GnssData(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96122b01d902d997, a0.this$, a1)) {}

          ::java::lang::String GnssData::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args);

          static PyMethodDef t_GnssData__methods_[] = {
            DECLARE_METHOD(t_GnssData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GnssData)[] = {
            { Py_tp_methods, t_GnssData__methods_ },
            { Py_tp_init, (void *) t_GnssData_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GnssData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GnssData, t_GnssData, GnssData);

          void t_GnssData::install(PyObject *module)
          {
            installType(&PY_TYPE(GnssData), &PY_TYPE_DEF(GnssData), module, "GnssData", 0);
          }

          void t_GnssData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "class_", make_descriptor(GnssData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "wrapfn_", make_descriptor(t_GnssData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GnssData::initializeClass, 1)))
              return NULL;
            return t_GnssData::wrap_Object(GnssData(((t_GnssData *) arg)->object.this$));
          }
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GnssData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            GnssData object((jobject) NULL);

            if (!parseArgs(args, "[BI", &a0, &a1))
            {
              INT_CALL(object = GnssData(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(GnssData), (PyObject *) self, "toString", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractAlmanac::class$ = NULL;
            jmethodID *AbstractAlmanac::mids$ = NULL;
            bool AbstractAlmanac::live$ = false;

            jclass AbstractAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_dff5885c2c873297] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_dff5885c2c873297] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_dff5885c2c873297] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_dff5885c2c873297] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_dff5885c2c873297] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_dff5885c2c873297] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_dff5885c2c873297] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractAlmanac::AbstractAlmanac(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

            jdouble AbstractAlmanac::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
            }

            jdouble AbstractAlmanac::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data);
            static PyGetSetDef t_AbstractAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractAlmanac, af2),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cic),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cis),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crs),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cuc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cus),
              DECLARE_GET_FIELD(t_AbstractAlmanac, iDot),
              DECLARE_GET_FIELD(t_AbstractAlmanac, meanMotion),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractAlmanac__methods_[] = {
              DECLARE_METHOD(t_AbstractAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getMeanMotion, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractAlmanac)[] = {
              { Py_tp_methods, t_AbstractAlmanac__methods_ },
              { Py_tp_init, (void *) t_AbstractAlmanac_init_ },
              { Py_tp_getset, t_AbstractAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractAlmanac, t_AbstractAlmanac, AbstractAlmanac);

            void t_AbstractAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractAlmanac), &PY_TYPE_DEF(AbstractAlmanac), module, "AbstractAlmanac", 0);
            }

            void t_AbstractAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "class_", make_descriptor(AbstractAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "wrapfn_", make_descriptor(t_AbstractAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractAlmanac::initializeClass, 1)))
                return NULL;
              return t_AbstractAlmanac::wrap_Object(AbstractAlmanac(((t_AbstractAlmanac *) arg)->object.this$));
            }
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractAlmanac object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractAlmanac(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
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
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldMatrix::class$ = NULL;
      jmethodID *SparseFieldMatrix::mids$ = NULL;
      bool SparseFieldMatrix::live$ = false;

      jclass SparseFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_3c6edf548344b9f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_addToEntry_d302e4fbc652587d] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_c992983685c753c5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_5d35d650870a3dcb] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_ef29faa67be274b8] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiplyEntry_d302e4fbc652587d] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_1409f31dc074a11f] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setEntry_d302e4fbc652587d] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_transposeMultiply_1409f31dc074a11f] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_3c6edf548344b9f0, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

      void SparseFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5d35d650870a3dcb], a0, a1));
      }

      jint SparseFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::FieldElement SparseFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ef29faa67be274b8], a0, a1));
      }

      jint SparseFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      void SparseFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_1409f31dc074a11f], a0.this$));
      }

      void SparseFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_1409f31dc074a11f], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args);
      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data);
      static PyGetSetDef t_SparseFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldMatrix)[] = {
        { Py_tp_methods, t_SparseFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_SparseFieldMatrix_init_ },
        { Py_tp_getset, t_SparseFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(SparseFieldMatrix, t_SparseFieldMatrix, SparseFieldMatrix);
      PyObject *t_SparseFieldMatrix::wrap_Object(const SparseFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldMatrix), &PY_TYPE_DEF(SparseFieldMatrix), module, "SparseFieldMatrix", 0);
      }

      void t_SparseFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "class_", make_descriptor(SparseFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "wrapfn_", make_descriptor(t_SparseFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseFieldMatrix::wrap_Object(SparseFieldMatrix(((t_SparseFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldMatrix(a0, a1, a2));
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

      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AberrationModifier::class$ = NULL;
          jmethodID *AberrationModifier::mids$ = NULL;
          bool AberrationModifier::live$ = false;

          jclass AberrationModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AberrationModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fieldNaturalToProper_dc1b815aeeb01d6f] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_dc1b815aeeb01d6f] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_naturalToProper_8caa5186a76fc396] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_properToNatural_8caa5186a76fc396] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AberrationModifier::AberrationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_dc1b815aeeb01d6f], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_dc1b815aeeb01d6f], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List AberrationModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void AberrationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void AberrationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_8caa5186a76fc396], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_8caa5186a76fc396], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self);
          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data);
          static PyGetSetDef t_AberrationModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AberrationModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AberrationModifier__methods_[] = {
            DECLARE_METHOD(t_AberrationModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldNaturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldProperToNatural, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AberrationModifier, modify, METH_O),
            DECLARE_METHOD(t_AberrationModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_AberrationModifier, naturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, properToNatural, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AberrationModifier)[] = {
            { Py_tp_methods, t_AberrationModifier__methods_ },
            { Py_tp_init, (void *) t_AberrationModifier_init_ },
            { Py_tp_getset, t_AberrationModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AberrationModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AberrationModifier, t_AberrationModifier, AberrationModifier);

          void t_AberrationModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AberrationModifier), &PY_TYPE_DEF(AberrationModifier), module, "AberrationModifier", 0);
          }

          void t_AberrationModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "class_", make_descriptor(AberrationModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "wrapfn_", make_descriptor(t_AberrationModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AberrationModifier::initializeClass, 1)))
              return NULL;
            return t_AberrationModifier::wrap_Object(AberrationModifier(((t_AberrationModifier *) arg)->object.this$));
          }
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AberrationModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds)
          {
            AberrationModifier object((jobject) NULL);

            INT_CALL(object = AberrationModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldNaturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
            ::org::orekit::frames::FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

            if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            }

            PyErr_SetArgsError(type, "fieldProperToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "naturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3));
              return result.wrap();
            }

            PyErr_SetArgsError(type, "properToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrMessage::class$ = NULL;
            jmethodID *SsrMessage::mids$ = NULL;
            bool SsrMessage::live$ = false;

            jclass SsrMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_27c89de82255b30a] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/SsrHeader;Ljava/util/List;)V");
                mids$[mid_getData_2afa36052df4765d] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
                mids$[mid_getHeader_708fd611322f89cf] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/ssr/SsrHeader;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrMessage::SsrMessage(jint a0, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_27c89de82255b30a, a0, a1.this$, a2.this$)) {}

            ::java::util::List SsrMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_2afa36052df4765d]));
            }

            ::org::orekit::gnss::metric::messages::ssr::SsrHeader SsrMessage::getHeader() const
            {
              return ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->callObjectMethod(this$, mids$[mid_getHeader_708fd611322f89cf]));
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
          namespace ssr {
            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args);
            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrMessage_getData(t_SsrMessage *self);
            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self);
            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data);
            static PyGetSetDef t_SsrMessage__fields_[] = {
              DECLARE_GET_FIELD(t_SsrMessage, data),
              DECLARE_GET_FIELD(t_SsrMessage, header),
              DECLARE_GET_FIELD(t_SsrMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrMessage__methods_[] = {
              DECLARE_METHOD(t_SsrMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_SsrMessage, getData, METH_NOARGS),
              DECLARE_METHOD(t_SsrMessage, getHeader, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrMessage)[] = {
              { Py_tp_methods, t_SsrMessage__methods_ },
              { Py_tp_init, (void *) t_SsrMessage_init_ },
              { Py_tp_getset, t_SsrMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(SsrMessage, t_SsrMessage, SsrMessage);
            PyObject *t_SsrMessage::wrap_Object(const SsrMessage& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_SsrMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_SsrMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrMessage), &PY_TYPE_DEF(SsrMessage), module, "SsrMessage", 0);
            }

            void t_SsrMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "class_", make_descriptor(SsrMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "wrapfn_", make_descriptor(t_SsrMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrMessage::initializeClass, 1)))
                return NULL;
              return t_SsrMessage::wrap_Object(SsrMessage(((t_SsrMessage *) arg)->object.this$));
            }
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader a1((jobject) NULL);
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              SsrMessage object((jobject) NULL);

              if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::SsrHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SsrMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrMessage_getData(t_SsrMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(result);
            }
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonFieldInterpolationGrid::class$ = NULL;
            jmethodID *PythonFieldInterpolationGrid::mids$ = NULL;
            bool PythonFieldInterpolationGrid::live$ = false;

            jclass PythonFieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_04b33bd8d7b2bde1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldInterpolationGrid::PythonFieldInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonFieldInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonFieldInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonFieldInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self);
            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data);
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonFieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, self),
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonFieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonFieldInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonFieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldInterpolationGrid, t_PythonFieldInterpolationGrid, PythonFieldInterpolationGrid);
            PyObject *t_PythonFieldInterpolationGrid::wrap_Object(const PythonFieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldInterpolationGrid), &PY_TYPE_DEF(PythonFieldInterpolationGrid), module, "PythonFieldInterpolationGrid", 1);
            }

            void t_PythonFieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "class_", make_descriptor(PythonFieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "wrapfn_", make_descriptor(t_PythonFieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonFieldInterpolationGrid::wrap_Object(PythonFieldInterpolationGrid(((t_PythonFieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonFieldInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
              PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getGridPoints", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldDeepSDP4::class$ = NULL;
          jmethodID *FieldDeepSDP4::mids$ = NULL;
          bool FieldDeepSDP4::live$ = false;

          jclass FieldDeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldDeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dee9d0fe004a8f9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5151ab0d47c2b93c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_0fa09c18fee449d5] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_072c8635f2164db9] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_072c8635f2164db9] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_dee9d0fe004a8f9d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_5151ab0d47c2b93c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args);
          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data);
          static PyGetSetDef t_FieldDeepSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDeepSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDeepSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldDeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDeepSDP4)[] = {
            { Py_tp_methods, t_FieldDeepSDP4__methods_ },
            { Py_tp_init, (void *) t_FieldDeepSDP4_init_ },
            { Py_tp_getset, t_FieldDeepSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(FieldDeepSDP4, t_FieldDeepSDP4, FieldDeepSDP4);
          PyObject *t_FieldDeepSDP4::wrap_Object(const FieldDeepSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDeepSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDeepSDP4), &PY_TYPE_DEF(FieldDeepSDP4), module, "FieldDeepSDP4", 0);
          }

          void t_FieldDeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "class_", make_descriptor(FieldDeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "wrapfn_", make_descriptor(t_FieldDeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDeepSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldDeepSDP4::wrap_Object(FieldDeepSDP4(((t_FieldDeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data)
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
#include "org/orekit/errors/UnsupportedParameterException.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *UnsupportedParameterException::class$ = NULL;
      jmethodID *UnsupportedParameterException::mids$ = NULL;
      bool UnsupportedParameterException::live$ = false;
      ::java::lang::String *UnsupportedParameterException::COMMA_SEP = NULL;
      ::java::lang::String *UnsupportedParameterException::NO_PARAMETER = NULL;

      jclass UnsupportedParameterException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/UnsupportedParameterException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_91fd4e71827f714e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COMMA_SEP = new ::java::lang::String(env->getStaticObjectField(cls, "COMMA_SEP", "Ljava/lang/String;"));
          NO_PARAMETER = new ::java::lang::String(env->getStaticObjectField(cls, "NO_PARAMETER", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnsupportedParameterException::UnsupportedParameterException(const ::java::lang::String & a0, const ::java::util::List & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_91fd4e71827f714e, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_UnsupportedParameterException__methods_[] = {
        DECLARE_METHOD(t_UnsupportedParameterException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnsupportedParameterException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnsupportedParameterException)[] = {
        { Py_tp_methods, t_UnsupportedParameterException__methods_ },
        { Py_tp_init, (void *) t_UnsupportedParameterException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnsupportedParameterException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(UnsupportedParameterException, t_UnsupportedParameterException, UnsupportedParameterException);

      void t_UnsupportedParameterException::install(PyObject *module)
      {
        installType(&PY_TYPE(UnsupportedParameterException), &PY_TYPE_DEF(UnsupportedParameterException), module, "UnsupportedParameterException", 0);
      }

      void t_UnsupportedParameterException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "class_", make_descriptor(UnsupportedParameterException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "wrapfn_", make_descriptor(t_UnsupportedParameterException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "boxfn_", make_descriptor(boxObject));
        env->getClass(UnsupportedParameterException::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "COMMA_SEP", make_descriptor(j2p(*UnsupportedParameterException::COMMA_SEP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "NO_PARAMETER", make_descriptor(j2p(*UnsupportedParameterException::NO_PARAMETER)));
      }

      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnsupportedParameterException::initializeClass, 1)))
          return NULL;
        return t_UnsupportedParameterException::wrap_Object(UnsupportedParameterException(((t_UnsupportedParameterException *) arg)->object.this$));
      }
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnsupportedParameterException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        UnsupportedParameterException object((jobject) NULL);

        if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = UnsupportedParameterException(a0, a1));
          self->object = object;
        }
        else
        {
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
#include "java/util/AbstractSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractSet::class$ = NULL;
    jmethodID *AbstractSet::mids$ = NULL;
    bool AbstractSet::live$ = false;

    jclass AbstractSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractSet::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jint AbstractSet::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean AbstractSet::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data);
    static PyGetSetDef t_AbstractSet__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractSet__methods_[] = {
      DECLARE_METHOD(t_AbstractSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, removeAll, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractSet)[] = {
      { Py_tp_methods, t_AbstractSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractSet, t_AbstractSet, AbstractSet);
    PyObject *t_AbstractSet::wrap_Object(const AbstractSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractSet::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractSet), &PY_TYPE_DEF(AbstractSet), module, "AbstractSet", 0);
    }

    void t_AbstractSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "class_", make_descriptor(AbstractSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "wrapfn_", make_descriptor(t_AbstractSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractSet::initializeClass, 1)))
        return NULL;
      return t_AbstractSet::wrap_Object(AbstractSet(((t_AbstractSet *) arg)->object.this$));
    }
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "removeAll", args, 2);
    }
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet::class$ = NULL;
          jmethodID *PolyhedronsSet::mids$ = NULL;
          bool PolyhedronsSet::live$ = false;

          jclass PolyhedronsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_fabe76086a822e9e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;D)V");
              mids$[mid_init$_748cd2c51a955d77] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_1f4d55383238fbb5] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_fc22ef365b06a732] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;D)V");
              mids$[mid_init$_e64bbe9910cbd659] = env->getMethodID(cls, "<init>", "(DDDDDDD)V");
              mids$[mid_buildNew_20bbe3dcfa244809] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_firstIntersection_505c363342ef9e07] = env->getMethodID(cls, "firstIntersection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
              mids$[mid_getBRep_56002d4c9835e187] = env->getMethodID(cls, "getBRep", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;");
              mids$[mid_rotate_0d7142cf5cc58689] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_translate_1f148067d6db6edf] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet::PolyhedronsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_fabe76086a822e9e, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_748cd2c51a955d77, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1f4d55383238fbb5, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_fc22ef365b06a732, a0.this$, a1.this$, a2)) {}

          PolyhedronsSet::PolyhedronsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_e64bbe9910cbd659, a0, a1, a2, a3, a4, a5, a6)) {}

          PolyhedronsSet PolyhedronsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_buildNew_20bbe3dcfa244809], a0.this$));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane PolyhedronsSet::firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Line & a1) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_firstIntersection_505c363342ef9e07], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep PolyhedronsSet::getBRep() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep(env->callObjectMethod(this$, mids$[mid_getBRep_56002d4c9835e187]));
          }

          PolyhedronsSet PolyhedronsSet::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_rotate_0d7142cf5cc58689], a0.this$, a1.this$));
          }

          PolyhedronsSet PolyhedronsSet::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_translate_1f148067d6db6edf], a0.this$));
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
          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args);
          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self);
          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg);
          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data);
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data);
          static PyGetSetDef t_PolyhedronsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet, bRep),
            DECLARE_GET_FIELD(t_PolyhedronsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, firstIntersection, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, getBRep, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet, rotate, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, translate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet)[] = {
            { Py_tp_methods, t_PolyhedronsSet__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet_init_ },
            { Py_tp_getset, t_PolyhedronsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet, t_PolyhedronsSet, PolyhedronsSet);
          PyObject *t_PolyhedronsSet::wrap_Object(const PolyhedronsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet), &PY_TYPE_DEF(PolyhedronsSet), module, "PolyhedronsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "BRep", make_descriptor(&PY_TYPE_DEF(PolyhedronsSet$BRep)));
          }

          void t_PolyhedronsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "class_", make_descriptor(PolyhedronsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "wrapfn_", make_descriptor(t_PolyhedronsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet::wrap_Object(PolyhedronsSet(((t_PolyhedronsSet *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolyhedronsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KKD", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 7:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolyhedronsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a1((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.firstIntersection(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "firstIntersection", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep result((jobject) NULL);
            OBJ_CALL(result = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(result);
          }

          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep value((jobject) NULL);
            OBJ_CALL(value = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventDetector::class$ = NULL;
        jmethodID *FieldODEEventDetector::mids$ = NULL;
        bool FieldODEEventDetector::live$ = false;

        jclass FieldODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_2fe24792561bd145] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_6becb2360697f07b] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_3c82d31ec337b8be] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_818bdb7f8312a2dd] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldODEEventDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2fe24792561bd145], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler FieldODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_6becb2360697f07b]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval FieldODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_3c82d31ec337b8be]));
        }

        jint FieldODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver FieldODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_818bdb7f8312a2dd]));
        }

        void FieldODEEventDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data);
        static PyGetSetDef t_FieldODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, solver),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventDetector)[] = {
          { Py_tp_methods, t_FieldODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventDetector, t_FieldODEEventDetector, FieldODEEventDetector);
        PyObject *t_FieldODEEventDetector::wrap_Object(const FieldODEEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventDetector), &PY_TYPE_DEF(FieldODEEventDetector), module, "FieldODEEventDetector", 0);
        }

        void t_FieldODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "class_", make_descriptor(FieldODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "wrapfn_", make_descriptor(t_FieldODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventDetector::wrap_Object(FieldODEEventDetector(((t_FieldODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointIntegrator::class$ = NULL;
        jmethodID *MidpointIntegrator::mids$ = NULL;
        bool MidpointIntegrator::live$ = false;

        jclass MidpointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_2d871a79348db26a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegrator::MidpointIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > MidpointIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > MidpointIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > MidpointIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
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
        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data);
        static PyGetSetDef t_MidpointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegrator)[] = {
          { Py_tp_methods, t_MidpointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegrator_init_ },
          { Py_tp_getset, t_MidpointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointIntegrator, t_MidpointIntegrator, MidpointIntegrator);

        void t_MidpointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegrator), &PY_TYPE_DEF(MidpointIntegrator), module, "MidpointIntegrator", 0);
        }

        void t_MidpointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "class_", make_descriptor(MidpointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "wrapfn_", make_descriptor(t_MidpointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegrator::wrap_Object(MidpointIntegrator(((t_MidpointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *InterpolatingTransformProvider::class$ = NULL;
      jmethodID *InterpolatingTransformProvider::mids$ = NULL;
      bool InterpolatingTransformProvider::live$ = false;

      jclass InterpolatingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/InterpolatingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_720281015ac47b21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_b22bdbe9f9cd12d5] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStep_dff5885c2c873297] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolatingTransformProvider::InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_720281015ac47b21, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint InterpolatingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_570ce0828f81a2c1]);
      }

      ::org::orekit::frames::TransformProvider InterpolatingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_b22bdbe9f9cd12d5]));
      }

      jdouble InterpolatingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_dff5885c2c873297]);
      }

      ::org::orekit::frames::Transform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args);
      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data);
      static PyGetSetDef t_InterpolatingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolatingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_InterpolatingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolatingTransformProvider)[] = {
        { Py_tp_methods, t_InterpolatingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_InterpolatingTransformProvider_init_ },
        { Py_tp_getset, t_InterpolatingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolatingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolatingTransformProvider, t_InterpolatingTransformProvider, InterpolatingTransformProvider);

      void t_InterpolatingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolatingTransformProvider), &PY_TYPE_DEF(InterpolatingTransformProvider), module, "InterpolatingTransformProvider", 0);
      }

      void t_InterpolatingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "class_", make_descriptor(InterpolatingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "wrapfn_", make_descriptor(t_InterpolatingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolatingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_InterpolatingTransformProvider::wrap_Object(InterpolatingTransformProvider(((t_InterpolatingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolatingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        InterpolatingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = InterpolatingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDoubleHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedDoubleHermiteInterpolator::mids$ = NULL;
      bool TimeStampedDoubleHermiteInterpolator::live$ = false;

      jclass TimeStampedDoubleHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDoubleHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_9ee6bd89f7bc0b17] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedDouble;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedDoubleHermiteInterpolator::TimeStampedDoubleHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedDoubleHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDoubleHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDoubleHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDoubleHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDoubleHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedDoubleHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDoubleHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedDoubleHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDoubleHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedDoubleHermiteInterpolator, t_TimeStampedDoubleHermiteInterpolator, TimeStampedDoubleHermiteInterpolator);
      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_Object(const TimeStampedDoubleHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedDoubleHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedDoubleHermiteInterpolator *self = (t_TimeStampedDoubleHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedDoubleHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDoubleHermiteInterpolator), &PY_TYPE_DEF(TimeStampedDoubleHermiteInterpolator), module, "TimeStampedDoubleHermiteInterpolator", 0);
      }

      void t_TimeStampedDoubleHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "class_", make_descriptor(TimeStampedDoubleHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedDoubleHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDoubleHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDoubleHermiteInterpolator::wrap_Object(TimeStampedDoubleHermiteInterpolator(((t_TimeStampedDoubleHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDoubleHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedDoubleHermiteInterpolator_of_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedDoubleHermiteInterpolator_init_(t_TimeStampedDoubleHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedDoubleHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedDoubleHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedDoubleHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::time::PY_TYPE(TimeStampedDouble);
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
      static PyObject *t_TimeStampedDoubleHermiteInterpolator_get__parameters_(t_TimeStampedDoubleHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AllowedSolution::class$ = NULL;
        jmethodID *AllowedSolution::mids$ = NULL;
        bool AllowedSolution::live$ = false;
        AllowedSolution *AllowedSolution::ABOVE_SIDE = NULL;
        AllowedSolution *AllowedSolution::ANY_SIDE = NULL;
        AllowedSolution *AllowedSolution::BELOW_SIDE = NULL;
        AllowedSolution *AllowedSolution::LEFT_SIDE = NULL;
        AllowedSolution *AllowedSolution::RIGHT_SIDE = NULL;

        jclass AllowedSolution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AllowedSolution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_049b389ba7d48c12] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/analysis/solvers/AllowedSolution;");
            mids$[mid_values_2b4bdd6180bb891c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/analysis/solvers/AllowedSolution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABOVE_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ABOVE_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            ANY_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ANY_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            BELOW_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "BELOW_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            LEFT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "LEFT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            RIGHT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "RIGHT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AllowedSolution AllowedSolution::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AllowedSolution(env->callStaticObjectMethod(cls, mids$[mid_valueOf_049b389ba7d48c12], a0.this$));
        }

        JArray< AllowedSolution > AllowedSolution::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AllowedSolution >(env->callStaticObjectMethod(cls, mids$[mid_values_2b4bdd6180bb891c]));
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
    namespace analysis {
      namespace solvers {
        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args);
        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AllowedSolution_values(PyTypeObject *type);
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data);
        static PyGetSetDef t_AllowedSolution__fields_[] = {
          DECLARE_GET_FIELD(t_AllowedSolution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AllowedSolution__methods_[] = {
          DECLARE_METHOD(t_AllowedSolution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, of_, METH_VARARGS),
          DECLARE_METHOD(t_AllowedSolution, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AllowedSolution)[] = {
          { Py_tp_methods, t_AllowedSolution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AllowedSolution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AllowedSolution)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AllowedSolution, t_AllowedSolution, AllowedSolution);
        PyObject *t_AllowedSolution::wrap_Object(const AllowedSolution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AllowedSolution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AllowedSolution::install(PyObject *module)
        {
          installType(&PY_TYPE(AllowedSolution), &PY_TYPE_DEF(AllowedSolution), module, "AllowedSolution", 0);
        }

        void t_AllowedSolution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "class_", make_descriptor(AllowedSolution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "wrapfn_", make_descriptor(t_AllowedSolution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "boxfn_", make_descriptor(boxObject));
          env->getClass(AllowedSolution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ABOVE_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ABOVE_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ANY_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ANY_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "BELOW_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::BELOW_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "LEFT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::LEFT_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "RIGHT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::RIGHT_SIDE)));
        }

        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AllowedSolution::initializeClass, 1)))
            return NULL;
          return t_AllowedSolution::wrap_Object(AllowedSolution(((t_AllowedSolution *) arg)->object.this$));
        }
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AllowedSolution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AllowedSolution result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::valueOf(a0));
            return t_AllowedSolution::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AllowedSolution_values(PyTypeObject *type)
        {
          JArray< AllowedSolution > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::values());
          return JArray<jobject>(result.this$).wrap(t_AllowedSolution::wrap_jobject);
        }
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *ConvertingRuleFactory::class$ = NULL;
          jmethodID *ConvertingRuleFactory::mids$ = NULL;
          bool ConvertingRuleFactory::live$ = false;

          jclass ConvertingRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0b43fca6e1f0e767] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/gauss/FieldRuleFactory;)V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConvertingRuleFactory::ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory & a0) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0b43fca6e1f0e767, a0.this$)) {}
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args);
          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data);
          static PyGetSetDef t_ConvertingRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_ConvertingRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConvertingRuleFactory__methods_[] = {
            DECLARE_METHOD(t_ConvertingRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConvertingRuleFactory)[] = {
            { Py_tp_methods, t_ConvertingRuleFactory__methods_ },
            { Py_tp_init, (void *) t_ConvertingRuleFactory_init_ },
            { Py_tp_getset, t_ConvertingRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConvertingRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(ConvertingRuleFactory, t_ConvertingRuleFactory, ConvertingRuleFactory);
          PyObject *t_ConvertingRuleFactory::wrap_Object(const ConvertingRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ConvertingRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ConvertingRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(ConvertingRuleFactory), &PY_TYPE_DEF(ConvertingRuleFactory), module, "ConvertingRuleFactory", 0);
          }

          void t_ConvertingRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "class_", make_descriptor(ConvertingRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "wrapfn_", make_descriptor(t_ConvertingRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConvertingRuleFactory::initializeClass, 1)))
              return NULL;
            return t_ConvertingRuleFactory::wrap_Object(ConvertingRuleFactory(((t_ConvertingRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConvertingRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory a0((jobject) NULL);
            PyTypeObject **p0;
            ConvertingRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::gauss::t_FieldRuleFactory::parameters_))
            {
              INT_CALL(object = ConvertingRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data)
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
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator$DifferentialEffect::class$ = NULL;
        jmethodID *AdapterPropagator$DifferentialEffect::mids$ = NULL;
        bool AdapterPropagator$DifferentialEffect::live$ = false;

        jclass AdapterPropagator$DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_f43130c50e9fafeb] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator$DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_f43130c50e9fafeb], a0.this$));
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
      namespace analytical {
        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg);

        static PyMethodDef t_AdapterPropagator$DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, apply, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator$DifferentialEffect)[] = {
          { Py_tp_methods, t_AdapterPropagator$DifferentialEffect__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator$DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator$DifferentialEffect, t_AdapterPropagator$DifferentialEffect, AdapterPropagator$DifferentialEffect);

        void t_AdapterPropagator$DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator$DifferentialEffect), &PY_TYPE_DEF(AdapterPropagator$DifferentialEffect), module, "AdapterPropagator$DifferentialEffect", 0);
        }

        void t_AdapterPropagator$DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "class_", make_descriptor(AdapterPropagator$DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "wrapfn_", make_descriptor(t_AdapterPropagator$DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator$DifferentialEffect::wrap_Object(AdapterPropagator$DifferentialEffect(((t_AdapterPropagator$DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory$FieldModel::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory$FieldModel::mids$ = NULL;
        bool GeoMagneticFieldFactory$FieldModel::live$ = false;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::IGRF = NULL;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::WMM = NULL;

        jclass GeoMagneticFieldFactory$FieldModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_09e2bb4d1bc9a210] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");
            mids$[mid_values_0a4386cf1222649e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            IGRF = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "IGRF", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            WMM = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "WMM", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticFieldFactory$FieldModel GeoMagneticFieldFactory$FieldModel::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GeoMagneticFieldFactory$FieldModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_09e2bb4d1bc9a210], a0.this$));
        }

        JArray< GeoMagneticFieldFactory$FieldModel > GeoMagneticFieldFactory$FieldModel::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< GeoMagneticFieldFactory$FieldModel >(env->callStaticObjectMethod(cls, mids$[mid_values_0a4386cf1222649e]));
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
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory$FieldModel__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory$FieldModel, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory$FieldModel__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory$FieldModel)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory$FieldModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory$FieldModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory$FieldModel)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory$FieldModel, t_GeoMagneticFieldFactory$FieldModel, GeoMagneticFieldFactory$FieldModel);
        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_Object(const GeoMagneticFieldFactory$FieldModel& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeoMagneticFieldFactory$FieldModel::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory$FieldModel), &PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel), module, "GeoMagneticFieldFactory$FieldModel", 0);
        }

        void t_GeoMagneticFieldFactory$FieldModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "class_", make_descriptor(GeoMagneticFieldFactory$FieldModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "boxfn_", make_descriptor(boxObject));
          env->getClass(GeoMagneticFieldFactory$FieldModel::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "IGRF", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::IGRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "WMM", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::WMM)));
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(GeoMagneticFieldFactory$FieldModel(((t_GeoMagneticFieldFactory$FieldModel *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          GeoMagneticFieldFactory$FieldModel result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::valueOf(a0));
            return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type)
        {
          JArray< GeoMagneticFieldFactory$FieldModel > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::values());
          return JArray<jobject>(result.this$).wrap(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject);
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesPhaseModifier::RelativisticClockInterSatellitesPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesPhaseModifier, t_RelativisticClockInterSatellitesPhaseModifier, RelativisticClockInterSatellitesPhaseModifier);

          void t_RelativisticClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier), module, "RelativisticClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesPhaseModifier::wrap_Object(RelativisticClockInterSatellitesPhaseModifier(((t_RelativisticClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/KthSelector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile$EstimationType::class$ = NULL;
          jmethodID *Percentile$EstimationType::mids$ = NULL;
          bool Percentile$EstimationType::live$ = false;
          Percentile$EstimationType *Percentile$EstimationType::LEGACY = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_1 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_2 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_3 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_4 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_5 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_6 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_7 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_8 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_9 = NULL;

          jclass Percentile$EstimationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile$EstimationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_evaluate_3c85c49b21672f07] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_valueOf_071a6093fe35c3e5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_values_dcaa04786abae305] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_evaluate_c1787a78ec64bdbf] = env->getMethodID(cls, "evaluate", "([D[IDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_estimate_ec22f36b0313b4dc] = env->getMethodID(cls, "estimate", "([D[IDILorg/hipparchus/util/KthSelector;)D");
              mids$[mid_index_948617e69b66e15d] = env->getMethodID(cls, "index", "(DI)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEGACY = new Percentile$EstimationType(env->getStaticObjectField(cls, "LEGACY", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_1 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_1", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_2 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_2", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_3 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_3", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_4 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_4", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_5 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_5", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_6 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_6", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_7 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_7", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_8 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_8", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_9 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_9", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble Percentile$EstimationType::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::util::KthSelector & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_3c85c49b21672f07], a0.this$, a1, a2.this$);
          }

          Percentile$EstimationType Percentile$EstimationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Percentile$EstimationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_071a6093fe35c3e5], a0.this$));
          }

          JArray< Percentile$EstimationType > Percentile$EstimationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Percentile$EstimationType >(env->callStaticObjectMethod(cls, mids$[mid_values_dcaa04786abae305]));
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type);
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data);
          static PyGetSetDef t_Percentile$EstimationType__fields_[] = {
            DECLARE_GET_FIELD(t_Percentile$EstimationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile$EstimationType__methods_[] = {
            DECLARE_METHOD(t_Percentile$EstimationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile$EstimationType)[] = {
            { Py_tp_methods, t_Percentile$EstimationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Percentile$EstimationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile$EstimationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Percentile$EstimationType, t_Percentile$EstimationType, Percentile$EstimationType);
          PyObject *t_Percentile$EstimationType::wrap_Object(const Percentile$EstimationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Percentile$EstimationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Percentile$EstimationType::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile$EstimationType), &PY_TYPE_DEF(Percentile$EstimationType), module, "Percentile$EstimationType", 0);
          }

          void t_Percentile$EstimationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "class_", make_descriptor(Percentile$EstimationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "wrapfn_", make_descriptor(t_Percentile$EstimationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(Percentile$EstimationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "LEGACY", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::LEGACY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_1", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_2", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_3", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_4", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_5", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_6", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_7", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_8", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_9", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_9)));
          }

          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile$EstimationType::initializeClass, 1)))
              return NULL;
            return t_Percentile$EstimationType::wrap_Object(Percentile$EstimationType(((t_Percentile$EstimationType *) arg)->object.this$));
          }
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile$EstimationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::util::KthSelector a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[DDk", ::org::hipparchus::util::KthSelector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "evaluate", args);
            return NULL;
          }

          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Percentile$EstimationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::valueOf(a0));
              return t_Percentile$EstimationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type)
          {
            JArray< Percentile$EstimationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::values());
            return JArray<jobject>(result.this$).wrap(t_Percentile$EstimationType::wrap_jobject);
          }
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase$Status::class$ = NULL;
        jmethodID *EstimatedMeasurementBase$Status::mids$ = NULL;
        bool EstimatedMeasurementBase$Status::live$ = false;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::PROCESSED = NULL;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::REJECTED = NULL;

        jclass EstimatedMeasurementBase$Status::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase$Status");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_cb636ef2d43b56b3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_values_534cad21c1a30254] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PROCESSED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "PROCESSED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            REJECTED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "REJECTED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase$Status EstimatedMeasurementBase$Status::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EstimatedMeasurementBase$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cb636ef2d43b56b3], a0.this$));
        }

        JArray< EstimatedMeasurementBase$Status > EstimatedMeasurementBase$Status::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EstimatedMeasurementBase$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_534cad21c1a30254]));
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type);
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase$Status__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase$Status, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase$Status__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase$Status)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase$Status__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimatedMeasurementBase$Status__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase$Status)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase$Status, t_EstimatedMeasurementBase$Status, EstimatedMeasurementBase$Status);
        PyObject *t_EstimatedMeasurementBase$Status::wrap_Object(const EstimatedMeasurementBase$Status& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase$Status::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase$Status), &PY_TYPE_DEF(EstimatedMeasurementBase$Status), module, "EstimatedMeasurementBase$Status", 0);
        }

        void t_EstimatedMeasurementBase$Status::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "class_", make_descriptor(EstimatedMeasurementBase$Status::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedMeasurementBase$Status::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "PROCESSED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::PROCESSED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "REJECTED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::REJECTED)));
        }

        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase$Status::wrap_Object(EstimatedMeasurementBase$Status(((t_EstimatedMeasurementBase$Status *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EstimatedMeasurementBase$Status result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::valueOf(a0));
            return t_EstimatedMeasurementBase$Status::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type)
        {
          JArray< EstimatedMeasurementBase$Status > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::values());
          return JArray<jobject>(result.this$).wrap(t_EstimatedMeasurementBase$Status::wrap_jobject);
        }
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler::class$ = NULL;
      jmethodID *ZipJarCrawler::mids$ = NULL;
      bool ZipJarCrawler::live$ = false;

      jclass ZipJarCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_fe56d648976a8dcb] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;)V");
          mids$[mid_init$_9a6e053ada5ce237] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ZipJarCrawler::ZipJarCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::net::URL & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe56d648976a8dcb, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::ClassLoader & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a6e053ada5ce237, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ZipJarCrawler__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler)[] = {
        { Py_tp_methods, t_ZipJarCrawler__methods_ },
        { Py_tp_init, (void *) t_ZipJarCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler, t_ZipJarCrawler, ZipJarCrawler);

      void t_ZipJarCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler), &PY_TYPE_DEF(ZipJarCrawler), module, "ZipJarCrawler", 0);
      }

      void t_ZipJarCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "class_", make_descriptor(ZipJarCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "wrapfn_", make_descriptor(t_ZipJarCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler::wrap_Object(ZipJarCrawler(((t_ZipJarCrawler *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::net::URL a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ZipJarCrawler(a0, a1));
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
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54IntegratorBuilder::mids$ = NULL;
        bool DormandPrince54IntegratorBuilder::live$ = false;

        jclass DormandPrince54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54IntegratorBuilder::DormandPrince54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince54IntegratorBuilder, t_DormandPrince54IntegratorBuilder, DormandPrince54IntegratorBuilder);

        void t_DormandPrince54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54IntegratorBuilder), &PY_TYPE_DEF(DormandPrince54IntegratorBuilder), module, "DormandPrince54IntegratorBuilder", 0);
        }

        void t_DormandPrince54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "class_", make_descriptor(DormandPrince54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54IntegratorBuilder::wrap_Object(DormandPrince54IntegratorBuilder(((t_DormandPrince54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEStateAndDerivative::class$ = NULL;
      jmethodID *FieldODEStateAndDerivative::mids$ = NULL;
      bool FieldODEStateAndDerivative::live$ = false;

      jclass FieldODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ee036456c0119d47] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_924e79cbd5b7c89c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteDerivative_226a0b2040b1d2e1] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryDerivative_226a0b2040b1d2e1] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryDerivative_f2aa3eb7e0b5647f] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_ee036456c0119d47, a0.this$, a1.this$, a2.this$)) {}

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a4) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_924e79cbd5b7c89c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_226a0b2040b1d2e1]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_226a0b2040b1d2e1]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_f2aa3eb7e0b5647f], a0));
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
      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args);
      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_FieldODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, primaryDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_FieldODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEStateAndDerivative)[] = {
        { Py_tp_methods, t_FieldODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_FieldODEStateAndDerivative_init_ },
        { Py_tp_getset, t_FieldODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::FieldODEState),
        NULL
      };

      DEFINE_TYPE(FieldODEStateAndDerivative, t_FieldODEStateAndDerivative, FieldODEStateAndDerivative);
      PyObject *t_FieldODEStateAndDerivative::wrap_Object(const FieldODEStateAndDerivative& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEStateAndDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEStateAndDerivative), &PY_TYPE_DEF(FieldODEStateAndDerivative), module, "FieldODEStateAndDerivative", 0);
      }

      void t_FieldODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "class_", make_descriptor(FieldODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "wrapfn_", make_descriptor(t_FieldODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_FieldODEStateAndDerivative::wrap_Object(FieldODEStateAndDerivative(((t_FieldODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureProcessingState::class$ = NULL;
          jmethodID *XmlStructureProcessingState::mids$ = NULL;
          bool XmlStructureProcessingState::live$ = false;

          jclass XmlStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ccbff64d3b5eedd] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          XmlStructureProcessingState::XmlStructureProcessingState(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccbff64d3b5eedd, a0.this$, a1.this$)) {}

          jboolean XmlStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
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
        namespace section {
          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_XmlStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_XmlStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureProcessingState)[] = {
            { Py_tp_methods, t_XmlStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_XmlStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(XmlStructureProcessingState, t_XmlStructureProcessingState, XmlStructureProcessingState);

          void t_XmlStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureProcessingState), &PY_TYPE_DEF(XmlStructureProcessingState), module, "XmlStructureProcessingState", 0);
          }

          void t_XmlStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "class_", make_descriptor(XmlStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "wrapfn_", make_descriptor(t_XmlStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_XmlStructureProcessingState::wrap_Object(XmlStructureProcessingState(((t_XmlStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            XmlStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = XmlStructureProcessingState(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnEvent::class$ = NULL;
          jmethodID *FieldStopOnEvent::mids$ = NULL;
          bool FieldStopOnEvent::live$ = false;

          jclass FieldStopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnEvent::FieldStopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
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
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args);
          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args);
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data);
          static PyGetSetDef t_FieldStopOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnEvent)[] = {
            { Py_tp_methods, t_FieldStopOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnEvent_init_ },
            { Py_tp_getset, t_FieldStopOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnEvent, t_FieldStopOnEvent, FieldStopOnEvent);
          PyObject *t_FieldStopOnEvent::wrap_Object(const FieldStopOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnEvent), &PY_TYPE_DEF(FieldStopOnEvent), module, "FieldStopOnEvent", 0);
          }

          void t_FieldStopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "class_", make_descriptor(FieldStopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "wrapfn_", make_descriptor(t_FieldStopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnEvent::wrap_Object(FieldStopOnEvent(((t_FieldStopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnEvent object((jobject) NULL);

            INT_CALL(object = FieldStopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data)
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
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorFormat::class$ = NULL;
      jmethodID *RealVectorFormat::mids$ = NULL;
      bool RealVectorFormat::live$ = false;

      jclass RealVectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_4ed7d7dd28d1bddd] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_ed0d223f69bb75cc] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;)Ljava/lang/String;");
          mids$[mid_format_39b5b20e8e62d3bb] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_11b109bd155ca898] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealVectorFormat_dbafcc70378c90ab] = env->getStaticMethodID(cls, "getRealVectorFormat", "()Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getRealVectorFormat_c6647bbef3e873a0] = env->getStaticMethodID(cls, "getRealVectorFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getSeparator_11b109bd155ca898] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_11b109bd155ca898] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_534cde3579de93aa] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_parse_d76e447a19a63b65] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/ArrayRealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVectorFormat::RealVectorFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      RealVectorFormat::RealVectorFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ed7d7dd28d1bddd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::java::lang::String RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_ed0d223f69bb75cc], a0.this$));
      }

      ::java::lang::StringBuffer RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_39b5b20e8e62d3bb], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealVectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      ::java::text::NumberFormat RealVectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_24f83dea4a8657b1]));
      }

      ::java::lang::String RealVectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_11b109bd155ca898]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_dbafcc70378c90ab]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_c6647bbef3e873a0], a0.this$));
      }

      ::java::lang::String RealVectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_11b109bd155ca898]));
      }

      ::java::lang::String RealVectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_11b109bd155ca898]));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_534cde3579de93aa], a0.this$));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_d76e447a19a63b65], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data);
      static PyGetSetDef t_RealVectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealVectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealVectorFormat, prefix),
        DECLARE_GET_FIELD(t_RealVectorFormat, realVectorFormat),
        DECLARE_GET_FIELD(t_RealVectorFormat, separator),
        DECLARE_GET_FIELD(t_RealVectorFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVectorFormat__methods_[] = {
        DECLARE_METHOD(t_RealVectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getRealVectorFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorFormat)[] = {
        { Py_tp_methods, t_RealVectorFormat__methods_ },
        { Py_tp_init, (void *) t_RealVectorFormat_init_ },
        { Py_tp_getset, t_RealVectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorFormat, t_RealVectorFormat, RealVectorFormat);

      void t_RealVectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorFormat), &PY_TYPE_DEF(RealVectorFormat), module, "RealVectorFormat", 0);
      }

      void t_RealVectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "class_", make_descriptor(RealVectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "wrapfn_", make_descriptor(t_RealVectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorFormat::initializeClass, 1)))
          return NULL;
        return t_RealVectorFormat::wrap_Object(RealVectorFormat(((t_RealVectorFormat *) arg)->object.this$));
      }
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat object((jobject) NULL);

            INT_CALL(object = RealVectorFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealVectorFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::text::NumberFormat a3((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2, a3));
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

      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealVector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat());
            return t_RealVectorFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealVectorFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat(a0));
              return t_RealVectorFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealVectorFormat", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data)
      {
        RealVectorFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealVectorFormat());
        return t_RealVectorFormat::wrap_Object(value);
      }

      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Max::class$ = NULL;
        jmethodID *Max::mids$ = NULL;
        bool Max::live$ = false;

        jclass Max::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Max");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Max::Max() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Max::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
    namespace analysis {
      namespace function {
        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Max_value(t_Max *self, PyObject *args);

        static PyMethodDef t_Max__methods_[] = {
          DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Max, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
          { Py_tp_methods, t_Max__methods_ },
          { Py_tp_init, (void *) t_Max_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Max)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Max, t_Max, Max);

        void t_Max::install(PyObject *module)
        {
          installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
        }

        void t_Max::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Max::initializeClass, 1)))
            return NULL;
          return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
        }
        static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Max::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
        {
          Max object((jobject) NULL);

          INT_CALL(object = Max());
          self->object = object;

          return 0;
        }

        static PyObject *t_Max_value(t_Max *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
